#include "choosecar.h"
#include "ui_choosecar.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"

choosecar::choosecar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::choosecar)
{
    ui->setupUi(this);
    ui->carTypeList->addItem("Mini");
    ui->carTypeList->addItem("Sedan");
    ui->carTypeList->addItem("Luxury");
    ui->carTypeList->addItem("Truck");
}

choosecar::~choosecar()
{
    delete ui;
}

void choosecar::on_closeButton_clicked()
{
    QApplication::exit();
}


void choosecar::on_addButton_clicked()
{
    QVector<QString> carData;

    carData.append( ui->carNumberInput->text() );
    carData.append( ui->carBrandInput->text() );

    QListWidgetItem *selectedItem = ui->carTypeList->currentItem();
    carData.append(selectedItem->text());

    //store data in a file:
    QFile file("carData.txt");

    if (file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream stream(&file);
        for (int i = 0; i < carData.size(); i++){
            stream << carData[i] << " ";
        }
        stream << "\n";
    }
    file.close();
    QMessageBox::information(0, "Information", "Car Added Successfully!");
}

