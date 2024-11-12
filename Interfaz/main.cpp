// Copyright 2024 [Sebastian Orozco Castillo]

#include "mainwindow.h"
#include "computergame.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  computerGame c;
  c.show();
  MainWindow w;
  w.show();
  return a.exec();
}
