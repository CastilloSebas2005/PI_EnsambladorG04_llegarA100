#include <iostream>
#include <string>

#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent) : QMainWindow(parent), ui(new Ui::Juego) {
  ui->setupUi(this);
}

Juego::~Juego() { delete ui; }

void Juego::updateTextBrowser() {
  // Convertir counter a QString y actualizar el texto del QTextBrowser
  QString text = QString::number(this->counter);
  ui->counterFrame->setText(text);
}

// TODO(any): las funciones que se definen de aca para abajo se pueden pasar a
// ensamblador
void Juego::on_pushButton_clicked() {
  this->counter++;
  updateTextBrowser();
}

void Juego::on_pushButton_2_clicked() {
  this->counter += 2;
  updateTextBrowser();
}

void Juego::on_pushButton_3_clicked() {
  this->counter += 3;
  updateTextBrowser();
}

void Juego::on_pushButton_4_clicked() {
  this->counter += 4;
  updateTextBrowser();
}

void Juego::on_pushButton_5_clicked() {
  this->counter += 5;
  updateTextBrowser();
}

void Juego::on_pushButton_6_clicked() {
  this->counter += 6;
  updateTextBrowser();
}

void Juego::on_pushButton_7_clicked() {
  this->counter += 7;
  updateTextBrowser();
}

void Juego::on_pushButton_8_clicked() {
  this->counter += 8;
  updateTextBrowser();
}

void Juego::on_pushButton_9_clicked() {
  this->counter += 9;
  updateTextBrowser();
}

void Juego::on_pushButton_10_clicked() {
  this->counter += 10;
  updateTextBrowser();
}
