#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}



void menu::on_menuExitBtn_clicked()
{
    QApplication::exit();
}


void menu::on_chooseCarButton_clicked()
{
    choosecarUI.show();
}


void menu::on_rentButton_clicked()
{
    rentcarUI.show();
}

