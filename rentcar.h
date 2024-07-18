#ifndef RENTCAR_H
#define RENTCAR_H

#include <QDialog>

namespace Ui {
class rentcar;
}

class rentcar : public QDialog
{
    Q_OBJECT

public:
    explicit rentcar(QWidget *parent = nullptr);
    ~rentcar();

private slots:
    void on_rentButton_clicked();

    void on_closeButton_clicked();

private:
    Ui::rentcar *ui;
};

#endif // RENTCAR_H
