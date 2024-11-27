#include "mainwindow.h"
#include "computergame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    computerGame x;
    x.show();
    w.show();
    return a.exec();
}
