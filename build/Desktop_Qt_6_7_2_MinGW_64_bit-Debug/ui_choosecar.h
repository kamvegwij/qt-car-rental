/********************************************************************************
** Form generated from reading UI file 'choosecar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSECAR_H
#define UI_CHOOSECAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_choosecar
{
public:
    QLineEdit *carBrandInput;
    QLabel *chooseCarLbl;
    QPushButton *addButton;
    QPushButton *closeButton;
    QLabel *carBrandLbl;
    QLabel *carTypeLbl;
    QListWidget *carTypeList;
    QLineEdit *carNumberInput;
    QLabel *carNumberLbl;

    void setupUi(QDialog *choosecar)
    {
        if (choosecar->objectName().isEmpty())
            choosecar->setObjectName("choosecar");
        choosecar->resize(581, 463);
        choosecar->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        carBrandInput = new QLineEdit(choosecar);
        carBrandInput->setObjectName("carBrandInput");
        carBrandInput->setGeometry(QRect(280, 90, 161, 31));
        carBrandInput->setStyleSheet(QString::fromUtf8("background-color: transparent; border: 1px solid black;"));
        chooseCarLbl = new QLabel(choosecar);
        chooseCarLbl->setObjectName("chooseCarLbl");
        chooseCarLbl->setGeometry(QRect(190, 0, 191, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(25);
        chooseCarLbl->setFont(font);
        chooseCarLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        addButton = new QPushButton(choosecar);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(300, 330, 93, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(10);
        font1.setBold(true);
        addButton->setFont(font1);
        addButton->setMouseTracking(true);
        addButton->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"border: none;\n"
"border-radius: 10%;\n"
"color: white;"));
        closeButton = new QPushButton(choosecar);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(170, 330, 93, 41));
        closeButton->setFont(font1);
        closeButton->setMouseTracking(true);
        closeButton->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: none;\n"
"border-radius: 10%;\n"
"color: white;"));
        carBrandLbl = new QLabel(choosecar);
        carBrandLbl->setObjectName("carBrandLbl");
        carBrandLbl->setGeometry(QRect(140, 80, 121, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font2.setPointSize(16);
        carBrandLbl->setFont(font2);
        carBrandLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        carTypeLbl = new QLabel(choosecar);
        carTypeLbl->setObjectName("carTypeLbl");
        carTypeLbl->setGeometry(QRect(140, 180, 121, 51));
        carTypeLbl->setFont(font2);
        carTypeLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        carTypeList = new QListWidget(choosecar);
        carTypeList->setObjectName("carTypeList");
        carTypeList->setGeometry(QRect(280, 190, 161, 31));
        carTypeList->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 1px solid black;"));
        carNumberInput = new QLineEdit(choosecar);
        carNumberInput->setObjectName("carNumberInput");
        carNumberInput->setGeometry(QRect(280, 140, 161, 31));
        carNumberInput->setStyleSheet(QString::fromUtf8("background-color: transparent; border: 1px solid black;"));
        carNumberLbl = new QLabel(choosecar);
        carNumberLbl->setObjectName("carNumberLbl");
        carNumberLbl->setGeometry(QRect(140, 130, 121, 51));
        carNumberLbl->setFont(font2);
        carNumberLbl->setStyleSheet(QString::fromUtf8("color: white;"));

        retranslateUi(choosecar);

        QMetaObject::connectSlotsByName(choosecar);
    } // setupUi

    void retranslateUi(QDialog *choosecar)
    {
        choosecar->setWindowTitle(QCoreApplication::translate("choosecar", "Dialog", nullptr));
        carBrandInput->setText(QString());
        chooseCarLbl->setText(QCoreApplication::translate("choosecar", "Add A Car", nullptr));
        addButton->setText(QCoreApplication::translate("choosecar", "Add", nullptr));
        closeButton->setText(QCoreApplication::translate("choosecar", "Exit", nullptr));
        carBrandLbl->setText(QCoreApplication::translate("choosecar", "Car Brand", nullptr));
        carTypeLbl->setText(QCoreApplication::translate("choosecar", "Car Type", nullptr));
        carNumberInput->setText(QString());
        carNumberLbl->setText(QCoreApplication::translate("choosecar", "Car No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosecar: public Ui_choosecar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSECAR_H
