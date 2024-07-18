/********************************************************************************
** Form generated from reading UI file 'rentcar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTCAR_H
#define UI_RENTCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_rentcar
{
public:
    QLineEdit *nameInput;
    QLabel *locationLabel;
    QPushButton *rentButton;
    QLineEdit *idInput;
    QLabel *idLabel;
    QPushButton *closeButton;
    QLabel *nameLabel;
    QLabel *rentCarLbl;
    QListWidget *carInputList;
    QLabel *carLabel;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QRadioButton *otherRadioButton;
    QLineEdit *locationInput;

    void setupUi(QDialog *rentcar)
    {
        if (rentcar->objectName().isEmpty())
            rentcar->setObjectName("rentcar");
        rentcar->resize(582, 451);
        rentcar->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        nameInput = new QLineEdit(rentcar);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(410, 80, 161, 31));
        nameInput->setStyleSheet(QString::fromUtf8("background-color: transparent; border: 1px solid black;"));
        locationLabel = new QLabel(rentcar);
        locationLabel->setObjectName("locationLabel");
        locationLabel->setGeometry(QRect(270, 220, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(14);
        locationLabel->setFont(font);
        locationLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        rentButton = new QPushButton(rentcar);
        rentButton->setObjectName("rentButton");
        rentButton->setGeometry(QRect(440, 380, 93, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(10);
        font1.setBold(true);
        rentButton->setFont(font1);
        rentButton->setMouseTracking(true);
        rentButton->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"border: none;\n"
"border-radius: 10%;\n"
"color: white;"));
        idInput = new QLineEdit(rentcar);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(410, 180, 161, 31));
        idInput->setStyleSheet(QString::fromUtf8("background-color: transparent; border: 1px solid black;"));
        idLabel = new QLabel(rentcar);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(270, 170, 121, 51));
        idLabel->setFont(font);
        idLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        closeButton = new QPushButton(rentcar);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(310, 380, 93, 41));
        closeButton->setFont(font1);
        closeButton->setMouseTracking(true);
        closeButton->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: none;\n"
"border-radius: 10%;\n"
"color: white;"));
        nameLabel = new QLabel(rentcar);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(270, 70, 121, 51));
        nameLabel->setFont(font);
        nameLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        rentCarLbl = new QLabel(rentcar);
        rentCarLbl->setObjectName("rentCarLbl");
        rentCarLbl->setGeometry(QRect(200, 0, 201, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font2.setPointSize(25);
        rentCarLbl->setFont(font2);
        rentCarLbl->setStyleSheet(QString::fromUtf8("color: white;"));
        carInputList = new QListWidget(rentcar);
        carInputList->setObjectName("carInputList");
        carInputList->setGeometry(QRect(410, 280, 161, 51));
        carInputList->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 1px solid black;"));
        carLabel = new QLabel(rentcar);
        carLabel->setObjectName("carLabel");
        carLabel->setGeometry(QRect(270, 270, 121, 51));
        carLabel->setFont(font);
        carLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        maleRadioButton = new QRadioButton(rentcar);
        maleRadioButton->setObjectName("maleRadioButton");
        maleRadioButton->setGeometry(QRect(290, 130, 61, 24));
        maleRadioButton->setStyleSheet(QString::fromUtf8("color: white;"));
        femaleRadioButton = new QRadioButton(rentcar);
        femaleRadioButton->setObjectName("femaleRadioButton");
        femaleRadioButton->setGeometry(QRect(370, 130, 71, 24));
        femaleRadioButton->setStyleSheet(QString::fromUtf8("color: white;"));
        otherRadioButton = new QRadioButton(rentcar);
        otherRadioButton->setObjectName("otherRadioButton");
        otherRadioButton->setGeometry(QRect(460, 130, 61, 24));
        otherRadioButton->setStyleSheet(QString::fromUtf8("color: white;"));
        locationInput = new QLineEdit(rentcar);
        locationInput->setObjectName("locationInput");
        locationInput->setGeometry(QRect(410, 230, 161, 31));
        locationInput->setStyleSheet(QString::fromUtf8("background-color: transparent; border: 1px solid black;"));

        retranslateUi(rentcar);

        QMetaObject::connectSlotsByName(rentcar);
    } // setupUi

    void retranslateUi(QDialog *rentcar)
    {
        rentcar->setWindowTitle(QCoreApplication::translate("rentcar", "Dialog", nullptr));
        nameInput->setText(QString());
        locationLabel->setText(QCoreApplication::translate("rentcar", "Location", nullptr));
        rentButton->setText(QCoreApplication::translate("rentcar", "Rent", nullptr));
        idInput->setText(QString());
        idLabel->setText(QCoreApplication::translate("rentcar", "ID No", nullptr));
        closeButton->setText(QCoreApplication::translate("rentcar", "Exit", nullptr));
        nameLabel->setText(QCoreApplication::translate("rentcar", "Name", nullptr));
        rentCarLbl->setText(QCoreApplication::translate("rentcar", "Rent A Car", nullptr));
        carLabel->setText(QCoreApplication::translate("rentcar", "Car", nullptr));
        maleRadioButton->setText(QCoreApplication::translate("rentcar", "Male", nullptr));
        femaleRadioButton->setText(QCoreApplication::translate("rentcar", "Female", nullptr));
        otherRadioButton->setText(QCoreApplication::translate("rentcar", "Other", nullptr));
        locationInput->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rentcar: public Ui_rentcar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTCAR_H
