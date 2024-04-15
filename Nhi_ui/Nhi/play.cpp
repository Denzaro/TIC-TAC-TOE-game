#include "play.h"
#include "ui_play.h"
#include <QLabel>

Play::Play(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Play)
{
    ui->setupUi(this);
    labelA = new QLabel("Label A", this);
    labelB = new QLabel("Label B", this);
    labelA->hide();
    labelB->hide();
}

Play::~Play()
{
    delete ui;
}

void Play::showLabelA()
{
    labelA->show();
    labelB->hide();
}

void Play::showLabelB()
{
    labelB->show();
    labelA->hide();
}

