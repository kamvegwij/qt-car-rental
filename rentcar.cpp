#include "rentcar.h"
#include "ui_rentcar.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
QVector<QString> getCarDetails();

rentcar::rentcar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::rentcar)
{
    ui->setupUi(this);

    //Read car data from the text file.
    QVector<QString> carData = getCarDetails();
    for (int i = 0; i < carData.size(); i++){
        ui->carInputList->addItem(carData[i]);
    }
}


rentcar::~rentcar()
{
    delete ui;
}

void rentcar::on_rentButton_clicked()
{
    QVector<QString> rentCarUserDetails;

    rentCarUserDetails.append( ui->nameInput->text() );
    rentCarUserDetails.append( ui->idInput->text() );
    rentCarUserDetails.append( ui->locationInput->text() );

    bool bIsMale = ui->maleRadioButton->isChecked();
    bool bIsFemale = ui->femaleRadioButton->isChecked();
    bool bIsNotSpecified = ui->otherRadioButton->isChecked();

    if (bIsMale){
        rentCarUserDetails.append("Male");
    }
    else if (bIsFemale){
        rentCarUserDetails.append("Female");
    }
    else{
        rentCarUserDetails.append("Not Specified");
    }
    QListWidgetItem *selectedCar = ui->carInputList->currentItem();
    QString selectedCarDetails = selectedCar->text();
    rentCarUserDetails.append(selectedCarDetails);

    QFile file("rentCarUserData.txt");

    if (file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream stream(&file);
        for (int i = 0; i < rentCarUserDetails.size(); i++){
            stream << rentCarUserDetails[i] << " ";
        }
        stream << "\n";
    }
    file.close();

    QModelIndex currentIndex = ui->carInputList->currentIndex();
    int currentRow = currentIndex.row();
    QVector<QString> allCars = getCarDetails();
    allCars.remove(currentRow);

    //rewrite into the file:
    QFile file2("carData.txt");

    if (file2.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream stream(&file2);
        for (int i = 0; i < allCars.size(); i++){
            stream << allCars[i] << "\n";
        }
    }
    file2.close();
    QMessageBox::information(0, "Rent Information", "Car Successfully Booked!");
}


void rentcar::on_closeButton_clicked()
{
    QApplication::exit();
}

QVector<QString> getCarDetails()
{
    QVector<QString> getData;
    QFile file("carData.txt");

    if (file.open(QIODevice::ReadOnly) | QIODevice::Text){

        QTextStream in(&file);
        while (!in.atEnd()){
            QString sLine = in.readLine();
            getData.append(sLine);
        }
    }
    file.close();
    return getData;
}
