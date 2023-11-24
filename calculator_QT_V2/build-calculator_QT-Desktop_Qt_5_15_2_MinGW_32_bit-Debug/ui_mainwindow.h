/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_three;
    QPushButton *pushButton_paren2;
    QPushButton *pushButton_six;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_point;
    QPushButton *pushButton_four;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_add;
    QPushButton *pushButton_del;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_paren1;
    QPushButton *pushButton_two;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_one;
    QPushButton *pushButton_five;
    QPushButton *pushButton_C;
    QMenuBar *menuBar;
    QMenu *menu_std;
    QMenu *menu_sci;
    QMenu *menu_prog;
    QMenu *menu_data;
    QMenu *menu_rate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 603);
        MainWindow->setMinimumSize(QSize(400, 603));
        MainWindow->setMaximumSize(QSize(400, 603));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setIconSize(QSize(400, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 120));
        QFont font;
        font.setPointSize(36);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 2, 4);

        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));
        pushButton_three->setMinimumSize(QSize(60, 80));
        QFont font1;
        font1.setPointSize(24);
        pushButton_three->setFont(font1);

        gridLayout->addWidget(pushButton_three, 6, 2, 1, 1);

        pushButton_paren2 = new QPushButton(centralwidget);
        pushButton_paren2->setObjectName(QString::fromUtf8("pushButton_paren2"));
        pushButton_paren2->setMinimumSize(QSize(60, 80));
        pushButton_paren2->setFont(font1);

        gridLayout->addWidget(pushButton_paren2, 2, 2, 1, 1);

        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));
        pushButton_six->setMinimumSize(QSize(60, 80));
        pushButton_six->setFont(font1);

        gridLayout->addWidget(pushButton_six, 4, 2, 1, 1);

        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));
        pushButton_eight->setMinimumSize(QSize(60, 80));
        pushButton_eight->setFont(font1);

        gridLayout->addWidget(pushButton_eight, 3, 1, 1, 1);

        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setMinimumSize(QSize(60, 80));
        pushButton_mult->setFont(font1);

        gridLayout->addWidget(pushButton_mult, 6, 3, 1, 1);

        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setMinimumSize(QSize(60, 80));
        pushButton_point->setFont(font1);

        gridLayout->addWidget(pushButton_point, 7, 1, 1, 1);

        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));
        pushButton_four->setMinimumSize(QSize(60, 80));
        pushButton_four->setFont(font1);

        gridLayout->addWidget(pushButton_four, 4, 0, 1, 1);

        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setMinimumSize(QSize(60, 80));
        pushButton_sub->setFont(font1);

        gridLayout->addWidget(pushButton_sub, 4, 3, 1, 1);

        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));
        pushButton_zero->setMinimumSize(QSize(60, 80));
        pushButton_zero->setFont(font1);

        gridLayout->addWidget(pushButton_zero, 7, 0, 1, 1);

        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));
        pushButton_seven->setMinimumSize(QSize(60, 80));
        pushButton_seven->setFont(font1);

        gridLayout->addWidget(pushButton_seven, 3, 0, 1, 1);

        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setMinimumSize(QSize(60, 80));
        pushButton_add->setFont(font1);

        gridLayout->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setMinimumSize(QSize(60, 80));
        pushButton_del->setFont(font1);

        gridLayout->addWidget(pushButton_del, 2, 3, 1, 1);

        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        pushButton_divide->setMinimumSize(QSize(60, 80));
        pushButton_divide->setFont(font1);

        gridLayout->addWidget(pushButton_divide, 7, 3, 1, 1);

        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setMinimumSize(QSize(60, 80));
        pushButton_equal->setFont(font1);

        gridLayout->addWidget(pushButton_equal, 7, 2, 1, 1);

        pushButton_paren1 = new QPushButton(centralwidget);
        pushButton_paren1->setObjectName(QString::fromUtf8("pushButton_paren1"));
        pushButton_paren1->setMinimumSize(QSize(60, 80));
        pushButton_paren1->setFont(font1);

        gridLayout->addWidget(pushButton_paren1, 2, 1, 1, 1);

        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));
        pushButton_two->setMinimumSize(QSize(60, 80));
        pushButton_two->setFont(font1);

        gridLayout->addWidget(pushButton_two, 6, 1, 1, 1);

        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));
        pushButton_nine->setMinimumSize(QSize(60, 80));
        pushButton_nine->setFont(font1);

        gridLayout->addWidget(pushButton_nine, 3, 2, 1, 1);

        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));
        pushButton_one->setMinimumSize(QSize(60, 80));
        pushButton_one->setFont(font1);

        gridLayout->addWidget(pushButton_one, 6, 0, 1, 1);

        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));
        pushButton_five->setMinimumSize(QSize(60, 80));
        pushButton_five->setFont(font1);

        gridLayout->addWidget(pushButton_five, 4, 1, 1, 1);

        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setMinimumSize(QSize(60, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(24);
        pushButton_C->setFont(font2);
        pushButton_C->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(pushButton_C, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menu_std = new QMenu(menuBar);
        menu_std->setObjectName(QString::fromUtf8("menu_std"));
        menu_sci = new QMenu(menuBar);
        menu_sci->setObjectName(QString::fromUtf8("menu_sci"));
        menu_prog = new QMenu(menuBar);
        menu_prog->setObjectName(QString::fromUtf8("menu_prog"));
        menu_data = new QMenu(menuBar);
        menu_data->setObjectName(QString::fromUtf8("menu_data"));
        menu_rate = new QMenu(menuBar);
        menu_rate->setObjectName(QString::fromUtf8("menu_rate"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(lineEdit, pushButton_C);
        QWidget::setTabOrder(pushButton_C, pushButton_paren1);
        QWidget::setTabOrder(pushButton_paren1, pushButton_paren2);
        QWidget::setTabOrder(pushButton_paren2, pushButton_del);
        QWidget::setTabOrder(pushButton_del, pushButton_seven);
        QWidget::setTabOrder(pushButton_seven, pushButton_eight);
        QWidget::setTabOrder(pushButton_eight, pushButton_nine);
        QWidget::setTabOrder(pushButton_nine, pushButton_add);
        QWidget::setTabOrder(pushButton_add, pushButton_four);
        QWidget::setTabOrder(pushButton_four, pushButton_five);
        QWidget::setTabOrder(pushButton_five, pushButton_six);
        QWidget::setTabOrder(pushButton_six, pushButton_sub);
        QWidget::setTabOrder(pushButton_sub, pushButton_one);
        QWidget::setTabOrder(pushButton_one, pushButton_two);
        QWidget::setTabOrder(pushButton_two, pushButton_three);
        QWidget::setTabOrder(pushButton_three, pushButton_mult);
        QWidget::setTabOrder(pushButton_mult, pushButton_zero);
        QWidget::setTabOrder(pushButton_zero, pushButton_point);
        QWidget::setTabOrder(pushButton_point, pushButton_equal);
        QWidget::setTabOrder(pushButton_equal, pushButton_divide);

        menuBar->addAction(menu_std->menuAction());
        menuBar->addAction(menu_sci->menuAction());
        menuBar->addAction(menu_prog->menuAction());
        menuBar->addAction(menu_data->menuAction());
        menuBar->addAction(menu_rate->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "KK\347\211\214\350\256\241\347\256\227\345\231\250", nullptr));
        lineEdit->setText(QString());
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_paren2->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_paren1->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        menu_std->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
        menu_sci->setTitle(QCoreApplication::translate("MainWindow", "\347\247\221\345\255\246", nullptr));
        menu_prog->setTitle(QCoreApplication::translate("MainWindow", "\347\250\213\345\272\217\345\221\230", nullptr));
        menu_data->setTitle(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237\350\256\241\347\256\227", nullptr));
        menu_rate->setTitle(QCoreApplication::translate("MainWindow", "\346\261\207\347\216\207\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
