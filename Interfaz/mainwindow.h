#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "playergame.h"
#include "computergame.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  private slots:

  void on_playersMode_clicked();

  void on_computerMode_clicked();

  void on_exit_clicked();

  void on_displayManual_clicked();

  private:
  Ui::MainWindow *ui;
  playerGame *playerWindow;
  computerGame *computerWindow;
};
#endif // MAINWINDOW_H
