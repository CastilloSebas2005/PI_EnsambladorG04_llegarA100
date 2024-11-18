#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "playergame.h"
#include "computergame.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  playerWindow = new playerGame();
  computerWindow = new computerGame();
}

MainWindow::~MainWindow() { delete ui; 
delete playerWindow;
delete computerWindow;
}


void MainWindow::on_playersMode_clicked()
{
  playerWindow->show();
  this->hide();
}


void MainWindow::on_computerMode_clicked()
{
  computerWindow->show();
  this->hide();
}


void MainWindow::on_exit_clicked()
{
  this->close();
}


void MainWindow::on_displayManual_clicked()
{
  // show manual
}

