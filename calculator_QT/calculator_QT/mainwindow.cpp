#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 将lineEdit控件设置为只读
    ui->lineEdit->setReadOnly(true);

    buttons = this->findChildren<QPushButton*>();
    for (QPushButton * button : buttons) {
        if (button->text() == "=") {// 为特定按钮设置单独的处理函数
            connect(ui->pushButton_equal, SIGNAL(clicked()), this, SLOT(pushButton_equal_clicked()));
        } else if(button->text() == "C") {
            connect(ui->pushButton_C, SIGNAL(clicked()), this, SLOT(pushButton_C_clicked()));
        } else if(button->text() == "Del") {
            connect(ui->pushButton_del, SIGNAL(clicked()), this, SLOT(pushButton_del_clicked()));
        } else { // 为其他按钮设置通用的处理函数
            connect(button, &QPushButton::clicked, this, &MainWindow::normal_ButtonClicked);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 普通按键处理
void MainWindow::normal_ButtonClicked()
{
    // 获取按钮的值
    QString value = qobject_cast<QPushButton*>(sender())->text();
    // 将按钮的值添加到当前的表达式中
    expression += value;
    // 在结果显示区域显示当前的表达式
    ui->lineEdit->setText(expression);
}
//清除按键处理
void MainWindow::pushButton_C_clicked()
{
    // 清除当前的表达式
    expression.clear();
    // 清空结果显示区域
    ui->lineEdit->clear();
}
//删除按键处理
void MainWindow::pushButton_del_clicked()
{
    expression.chop(1); // 删除最后一个字符
    ui->lineEdit->setText(expression);// 更新lineEdit控件的文本
}
//等于按键处理
void MainWindow::pushButton_equal_clicked()
{
    //计算结果
    QString postfix = infixToPostfix(expression);
    double result = calculatePostfixExpression(postfix);
    // 在结果显示栏显示这个值
    qDebug() << expression;
    if(expression.isEmpty()) {
        ui->lineEdit->setText("");
    } else {
        expression = expression + "=" + QString::number(result);
        ui->lineEdit->setText(expression);
    }
}

// 将中缀表达式转换为后缀表达式
QString MainWindow::infixToPostfix(const QString &infix)
{
    QStack<QString> stack_str;
    QString postfix;
    QStringList tokens;
    QString number;

    //切割字符串
    for (int i = 0; i < infix.length(); ++i) {
        QChar currentChar = infix.at(i);

        if (currentChar.isDigit() || currentChar == '.') {
            number.append(currentChar);//如果是数字或小数点，就添加到number字符串中
        } else {
            if (!number.isEmpty()) {
                tokens << number;
                number.clear();
            }
            tokens << QString(currentChar);
        }
    }

    if (!number.isEmpty()) {
        tokens << number;
    }
    //压栈
    for (const QString &token : tokens) {
        if (token == "+" || token == "-") {
            while (!stack_str.isEmpty() && stack_str.top() != "(") {
                postfix += stack_str.pop() + " ";
            }
            stack_str.push(token);
        } else if (token == "*" || token == "/") {
            while (!stack_str.isEmpty() && (stack_str.top() == "*" || stack_str.top() == "/")) {
                postfix += stack_str.pop() + " ";
            }
            stack_str.push(token);
        } else if (token == "(") {
            stack_str.push(token);
        } else if (token == ")") {
            while (!stack_str.isEmpty() && stack_str.top() != "(") {
                postfix += stack_str.pop() + " ";
            }
            stack_str.pop(); // 弹出"("
        } else if (token == "=") { //表达式中有“=”号，防止重复计算
            QMessageBox::information(this, tr("警告"), tr("算式非法！！请重试！"));
            // 清除当前的表达式
            expression.clear();
            postfix.clear();
            return 0;
        } else {
            postfix += token + " ";
        }
    }

    while (!stack_str.isEmpty()) {
        postfix += stack_str.pop() + " ";
    }

    return postfix.trimmed();
}

// 计算后缀表达式的值
double MainWindow::calculatePostfixExpression(const QString &postfix)
{
    QStack<double> stack_num;

    if(postfix.isEmpty()) {
        return 0;
    }

    QStringList tokens = postfix.split(' ');

    for (const QString &token : tokens) {
        bool ok;
        double number = token.toDouble(&ok);

        if (ok) {
            stack_num.push(number);
        } else {
            double operand2 = stack_num.pop();
            double operand1 = stack_num.pop();

            if (token == "+") {
                stack_num.push(operand1 + operand2);
            } else if (token == "-") {
                stack_num.push(operand1 - operand2);
            } else if (token == "*") {
                stack_num.push(operand1 * operand2);
            } else if (token == "/") {
                if(operand2 == 0) {//除数非法
                    QMessageBox::information(this, tr("警告"), tr("算式非法！！请重试！"));
                    expression.clear();
                    return 0;
                }
                stack_num.push(operand1 / operand2);
            }
        }
    }

    return stack_num.top();
}










