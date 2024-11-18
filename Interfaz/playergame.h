#ifndef PLAYERGAME_H
#define PLAYERGAME_H

#include "ui_playergame.h"
#include <QMainWindow>

extern "C" void updateCounter(uint8_t *counter, uint8_t sizeToUpdate);


namespace Ui {
class playerGame;
}

class playerGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit playerGame(QWidget *parent = nullptr);
    ~playerGame();

private slots:

  void resizeEvent(QResizeEvent *event);

  void updateTextBrowser1();

  void updateTextBrowser2(uint8_t play);

  void updateTextBrowser3(QString player);

  void updateTextBrowser4(QString player);

  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_6_clicked();

  void on_pushButton_7_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_9_clicked();

  void on_pushButton_10_clicked();

  void on_exit_clicked();

private:
    Ui::playerGame *ui;
    uint8_t counter = 0;
    bool turn = true;
};

#endif // PLAYERGAME_H
