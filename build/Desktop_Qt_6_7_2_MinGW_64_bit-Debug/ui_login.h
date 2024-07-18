/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *mainLbl;
    QLabel *userIDLbl;
    QLabel *passwordLbl;
    QLineEdit *userIDInput;
    QLineEdit *passwordInput;
    QPushButton *closeButton;
    QPushButton *loginButton;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 600);
        login->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        mainLbl = new QLabel(centralwidget);
        mainLbl->setObjectName("mainLbl");
        mainLbl->setGeometry(QRect(160, 0, 541, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(31);
        font.setBold(true);
        font.setUnderline(false);
        mainLbl->setFont(font);
        mainLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        userIDLbl = new QLabel(centralwidget);
        userIDLbl->setObjectName("userIDLbl");
        userIDLbl->setGeometry(QRect(250, 260, 111, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(16);
        userIDLbl->setFont(font1);
        userIDLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        passwordLbl = new QLabel(centralwidget);
        passwordLbl->setObjectName("passwordLbl");
        passwordLbl->setGeometry(QRect(250, 330, 141, 51));
        passwordLbl->setFont(font1);
        passwordLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        userIDInput = new QLineEdit(centralwidget);
        userIDInput->setObjectName("userIDInput");
        userIDInput->setGeometry(QRect(390, 270, 161, 31));
        userIDInput->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        passwordInput = new QLineEdit(centralwidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(390, 340, 161, 31));
        passwordInput->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        passwordInput->setEchoMode(QLineEdit::Password);
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(300, 410, 93, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font2.setPointSize(10);
        font2.setBold(true);
        closeButton->setFont(font2);
        closeButton->setMouseTracking(true);
        closeButton->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: none;\n"
"border-radius: 10%;\n"
"color: white;"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(430, 410, 93, 41));
        loginButton->setFont(font2);
        loginButton->setMouseTracking(true);
        loginButton->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"border: none;\n"
"border-radius: 10%;\n"
"color: white;"));
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        mainLbl->setText(QCoreApplication::translate("login", "Cape Town Car Rentals", nullptr));
        userIDLbl->setText(QCoreApplication::translate("login", "Username", nullptr));
        passwordLbl->setText(QCoreApplication::translate("login", "Password", nullptr));
        closeButton->setText(QCoreApplication::translate("login", "Exit", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
