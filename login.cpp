#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    username = "Kamve";
    password = "Kamve321";
}

login::~login()
{
    delete ui;
}

void login::on_closeButton_clicked()
{
    QApplication::exit();
}


void login::on_loginButton_clicked()
{
    QString enteredUsername = ui->userIDInput->text();
    QString enteredPassword = ui->passwordInput->text();

        if (enteredUsername == username)
        {
            if (enteredPassword == password)
            {
                menuUI.show();
                login::close();
            }
            else
            {
                QMessageBox::information(0,"Login","Incorrect Password!");
            }
        }
        else
        {
            QMessageBox::information(0,"Login","Incorrect Username!");
        }
}

