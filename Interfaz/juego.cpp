#include <iostream>
#include <string>

#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent) : QMainWindow(parent), ui(new Ui::Juego) {
  ui->setupUi(this);
}

Juego::~Juego() { delete ui; }

void Juego::updateTextBrowser() {
  // Convertir counter a QString y actualizar el texto del QTextBrowser con formato HTML
  QString text = QString::number(this->counter);
  QString formattedText = QString(
    "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">"
    "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" />"
    "<style type=\"text/css\">"
    "p, li { white-space: pre-wrap; }"
    "hr { height: 1px; border-width: 0; }"
    "li.unchecked::marker { content: \"\\2610\"; }"
    "li.checked::marker { content: \"\\2612\"; }"
    "</style></head>"
    "<body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">"
    "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
    "<span style=\" font-size:24pt; font-weight:700;\">%1</span>"
    "</p></body></html>").arg(text);
  ui->counterFrame->setHtml(formattedText);
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
