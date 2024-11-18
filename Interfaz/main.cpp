// Copyright 2024 [Sebastian Orozco Castillo]

#include "mainwindow.h"
#include "computergame.h"
#include "playergame.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
