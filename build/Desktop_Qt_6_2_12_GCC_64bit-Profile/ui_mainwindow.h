/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView_2;
    QWidget *widget;
    QLineEdit *idTextField;
    QLineEdit *passwordTextField;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1028, 600);
        MainWindow->setMinimumSize(QSize(1028, 600));
        MainWindow->setMaximumSize(QSize(1028, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhSensitiveData);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(510, 0, 521, 581));
        graphicsView_2->setMinimumSize(QSize(521, 561));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: #383C60;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, -10, 511, 591));
        widget->setStyleSheet(QString::fromUtf8("background-color: #333333;"));
        idTextField = new QLineEdit(widget);
        idTextField->setObjectName(QString::fromUtf8("idTextField"));
        idTextField->setGeometry(QRect(90, 200, 281, 41));
        idTextField->setStyleSheet(QString::fromUtf8("#idTextField{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 8px; \n"
"padding-left: 20px;\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"\n"
"#idTextField:checked {\n"
"background-color: rgb(232, 233, 235);\n"
"}\n"
""));
        passwordTextField = new QLineEdit(widget);
        passwordTextField->setObjectName(QString::fromUtf8("passwordTextField"));
        passwordTextField->setGeometry(QRect(90, 290, 281, 41));
        passwordTextField->setStyleSheet(QString::fromUtf8("#passwordTextField{\n"
"background-color: rgb(246, 245, 244);\n"
"border-radius: 8px; \n"
"padding-left: 20px;\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"\n"
"#passwordTextField:checked {\n"
"background-color: rgb(232, 233, 235);\n"
"}\n"
""));
        passwordTextField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordTextField->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(150, 390, 161, 41));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        loginButton->setMaximumSize(QSize(1820, 890));
        loginButton->setSizeIncrement(QSize(1, 1));
        loginButton->setStyleSheet(QString::fromUtf8("#loginButton{\n"
"border-radius: 10px; \n"
"color: rgb(66, 179, 126);\n"
"border: 1px solid rgb(66, 179, 126);\n"
"}\n"
"\n"
"#loginButton:Hover{\n"
"background-color: rgb(66, 179, 126);\n"
"border-radius: 10px; \n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 211, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 241, 17));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 170, 41, 17));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 260, 111, 17));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 40, 501, 501));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/bg.svg")));
        label_5->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1028, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        idTextField->setText(QString());
        idTextField->setPlaceholderText(QString());
        passwordTextField->setText(QString());
        passwordTextField->setPlaceholderText(QString());
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome Back", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Please enter admin details", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
