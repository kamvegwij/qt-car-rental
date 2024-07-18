/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *rentButton;
    QPushButton *chooseCarButton;
    QPushButton *menuExitBtn;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(757, 550);
        menu->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        rentButton = new QPushButton(menu);
        rentButton->setObjectName("rentButton");
        rentButton->setGeometry(QRect(290, 280, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(12);
        font.setBold(true);
        rentButton->setFont(font);
        rentButton->setMouseTracking(true);
        rentButton->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"border: none;\n"
"border-radius: 25px;\n"
"color: white;"));
        chooseCarButton = new QPushButton(menu);
        chooseCarButton->setObjectName("chooseCarButton");
        chooseCarButton->setGeometry(QRect(290, 220, 171, 51));
        chooseCarButton->setFont(font);
        chooseCarButton->setMouseTracking(true);
        chooseCarButton->setStyleSheet(QString::fromUtf8("background-color: skyblue;\n"
"border: none;\n"
"border-radius: 25px;\n"
"color: white;"));
        menuExitBtn = new QPushButton(menu);
        menuExitBtn->setObjectName("menuExitBtn");
        menuExitBtn->setGeometry(QRect(10, 10, 61, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(10);
        font1.setBold(true);
        menuExitBtn->setFont(font1);
        menuExitBtn->setMouseTracking(true);
        menuExitBtn->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: none;\n"
"border-radius: 10px;\n"
"color: white;"));
        menuExitBtn->setFlat(false);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        rentButton->setText(QCoreApplication::translate("menu", "Rent Car", nullptr));
        chooseCarButton->setText(QCoreApplication::translate("menu", "Choose Car", nullptr));
        menuExitBtn->setText(QCoreApplication::translate("menu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
