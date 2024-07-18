#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "choosecar.h"
#include "rentcar.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:

    void on_menuExitBtn_clicked();

    void on_chooseCarButton_clicked();

    void on_rentButton_clicked();

private:
    Ui::menu *ui;
    choosecar choosecarUI;
    rentcar rentcarUI;
};

#endif // MENU_H
