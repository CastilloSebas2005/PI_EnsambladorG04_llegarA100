// Copyright 2024 [Sebastian Orozco Castillo]

#include "mainwindow.h"
#include "juego.h"

#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego game;
    game.show();
    MainWindow w;
    w.show();
    return a.exec();
}
