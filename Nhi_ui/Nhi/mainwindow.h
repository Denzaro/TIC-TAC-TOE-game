#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <play.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

public:
    Ui::MainWindow *ui;
    Play *play;
};
#endif // MAINWINDOW_H