#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_closeButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::login *ui;
    menu menuUI;
    QString username;
    QString password;
};
#endif // LOGIN_H
