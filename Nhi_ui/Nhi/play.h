#ifndef PLAY_H
#define PLAY_H

#include <QWidget>

namespace Ui {
class Play;
}

class QLabel; // Forward declaration

class Play : public QWidget
{
    Q_OBJECT

public:
    explicit Play(QWidget *parent = nullptr);
    ~Play();

    void showLabelA();
    void showLabelB();


private:
    Ui::Play *ui;
    QLabel *labelA;
    QLabel *labelB;
};

#endif // PLAY_H

