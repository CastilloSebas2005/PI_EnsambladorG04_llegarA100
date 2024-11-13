#ifndef PLAYERGAME_H
#define PLAYERGAME_H

#include <QMainWindow>

namespace Ui {
class playerGame;
}

class playerGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit playerGame(QWidget *parent = nullptr);
    ~playerGame();

private:
    Ui::playerGame *ui;
};

#endif // PLAYERGAME_H
