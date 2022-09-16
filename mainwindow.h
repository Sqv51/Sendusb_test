#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<libusb/libusb/libusb.h>
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_ConnectButton_clicked();

private:
    Ui::MainWindow *ui;

};


#endif // MAINWINDOW_H
