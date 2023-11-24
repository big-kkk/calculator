#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>     // QMainWindow类提供了一个主应用程序窗口，你可以在其中添加菜单栏、工具栏、状态栏等
#include <QDir>            // QDir类提供了对目录和文件系统的访问
#include <QFileDialog>     // QFileDialog类提供了一个对话框，让用户可以选择文件或者目录
#include <QListWidgetItem> // QListWidgetItem类提供了列表控件中的单个项目
#include <QDebug>          // QDebug类提供了一个方便的方式来输出调试信息
#include <QMessageBox>     // QMessageBox类提供了一个模态对话框，用于显示消息、警告或者错误，或者获取用户的确认或者决定
#include <QShortcut>       // QShortcut类提供了创建和管理键盘快捷键的功能
#include <QString>          //字符串数据结构
#include <QStack>           //实现栈数据结构
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include <QLabel>
#include <QGraphicsProxyWidget>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        // 将中缀表达式转换为后缀表达式
        QString infixToPostfix(const QString &infix);
        // 计算后缀表达式的值
        double calculatePostfixExpression(const QString &expression);

    public slots:
        void normal_ButtonClicked();//处理所有按键点击事件
        void pushButton_C_clicked();//清除按钮
        void pushButton_equal_clicked();//“=”按钮
        void pushButton_del_clicked();//删除按钮

    private:
        Ui::MainWindow *ui;
        QString expression; // 用于保存表达式的字符串
        QList<QPushButton*> buttons;//保护所有按钮的Qlist
};
#endif // MAINWINDOW_H
