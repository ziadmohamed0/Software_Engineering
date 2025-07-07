#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QLineSeries *series = new QLineSeries();
//    series->append(0, 5);
//    series->append(1, 9);
//    series->append(2, 7);
//    series->append(3, 3);
//    series->append(4, 0);
//    series->append(5, 8);
//    series->append(6, 12);
//    series->append(7, 18);
//    series->append(8, 5);
//    series->append(9, 2);

//    QChart *chart = new QChart();
//    chart->legend()->hide();
//    chart->addSeries(series);
//    chart->createDefaultAxes();
//    chart->axes(Qt::Vertical).first()->setRange(0, 20);
//    chart->axes(Qt::Horizontal).first()->setRange(0, 11);
//    chart->setVisible(true);


//    QChartView *chartView = new QChartView(chart);
//    chartView->setRenderHint(QPainter::Antialiasing);
//    chartView->setVisible(true);

//    setCentralWidget(chartView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

