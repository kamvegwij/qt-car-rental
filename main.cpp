#include "login.h"
#include "menu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //login m;
    menu w;
    w.show();
    return a.exec();
}
