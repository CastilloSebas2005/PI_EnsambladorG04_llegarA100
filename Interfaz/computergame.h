#ifndef COMPUTERGAME_H
#define COMPUTERGAME_H

#include <QMainWindow>
#include <cstdint>

#include "ui_computergame.h"

extern "C" void updateCounter(uint8_t *counter, uint8_t sizeToUpdate);

namespace Ui {
class computerGame;
}

class computerGame : public QMainWindow {
  Q_OBJECT

public:
  explicit computerGame(QWidget *parent = nullptr);
  ~computerGame();

private slots:

  void resizeEvent(QResizeEvent *event);

  void updateTextBrowser1();

  void updateTextBrowser2(uint8_t play);

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
  Ui::computerGame *ui;
  uint8_t counter = 0;
  bool turn = true;
  void computerTurn();

};

#endif // COMPUTERGAME_H
