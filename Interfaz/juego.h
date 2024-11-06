#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <cstdint>

namespace Ui {
class Juego;
}

class Juego : public QMainWindow {
  Q_OBJECT

public:
  explicit Juego(QWidget *parent = nullptr);
  ~Juego();
private slots:
  void updateTextBrowser();
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

private:
  Ui::Juego *ui;
  uint8_t counter = 0;
};

#endif // JUEGO_H
