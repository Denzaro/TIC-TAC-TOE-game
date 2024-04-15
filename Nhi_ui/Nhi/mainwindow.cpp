#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("E:/OOP_project/TIC-TAC-TOE-game/Nhi_ui/Nhi/image/background3.jpg");

    int labelWidth = ui->label->width();
    int labelHeight = ui->label->height();

    int imageWidth = pix.width();
    int imageHeight = pix.height();

    int newWidth = imageWidth;
    int newHeight = imageHeight;

    if (imageWidth > labelWidth || imageHeight > labelHeight) {
        double ratioW = (double)labelWidth / imageWidth;
        double ratioH = (double)labelHeight / imageHeight;
        double scaleFactor = qMin(ratioW, ratioH);

        newWidth = scaleFactor * imageWidth;
        newHeight = scaleFactor * imageHeight;
    }

    int x = (labelWidth - newWidth)-50;
    int y = (labelHeight - newHeight)+10;

    ui->label->setPixmap(pix.scaled(newWidth, newHeight, Qt::KeepAspectRatio));
    ui->label->setGeometry(x, y, newWidth, newHeight);
}

void MainWindow::on_button1_clicked()
{
    play = new Play(this);
    play->showLabelA();
    setCentralWidget(play);
}

void MainWindow::on_button2_clicked()
{
    play = new Play(this);
    play->showLabelB();
    setCentralWidget(play);
}

MainWindow::~MainWindow()
{
    delete ui;
}


