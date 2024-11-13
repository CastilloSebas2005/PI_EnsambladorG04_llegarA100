#include "playergame.h"
#include "ui_playergame.h"

playerGame::playerGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::playerGame)
{
    ui->setupUi(this);
}

playerGame::~playerGame()
{
    delete ui;
}
