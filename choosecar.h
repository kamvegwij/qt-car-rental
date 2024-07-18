#ifndef CHOOSECAR_H
#define CHOOSECAR_H

#include <QDialog>

namespace Ui {
class choosecar;
}

class choosecar : public QDialog
{
    Q_OBJECT

public:
    explicit choosecar(QWidget *parent = nullptr);
    ~choosecar();

private slots:
    void on_closeButton_clicked();

    void on_addButton_clicked();

private:
    Ui::choosecar *ui;
};

#endif // CHOOSECAR_H
