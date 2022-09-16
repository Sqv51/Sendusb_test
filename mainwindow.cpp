#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include<QtCharts>
#include<QApplication>
#include<QtCharts>
#include <QtCore/QRandomGenerator>
#include <QtCore/QDebug>
#include"chart.h"


QList<QSerialPortInfo> list;
 QSerialPort *serial1 = new QSerialPort;
 bool serialDeviceIsConnected = false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_ConnectButton_clicked()
{
    //grafik başla
    Chart *chart = new Chart;
        chart->setTitle("Dynamic spline chart");
        chart->legend()->hide();
        chart->setAnimationOptions(QChart::AllAnimations);
        QChartView chartView(chart);
        chartView.setRenderHint(QPainter::Antialiasing);
        chart->show();
}

