// Copyright 2024 [Sebastian Orozco Castillo]

#include "juego.h"
#include "mainwindow.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Juego game;
  game.show();
  MainWindow w;
  w.show();
  return a.exec();
}
