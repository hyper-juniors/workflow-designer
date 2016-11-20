#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // FIXME correct dimension based on scene view
    scene = new QGraphicsScene(0, 0, 800, 600);
    ui->graphicsView->setScene(scene);

    scene->addRect(0, 0, 100, 200, QPen(Qt::darkRed), QBrush(Qt::red, Qt::FDiagPattern));
}

MainWindow::~MainWindow()
{
    delete ui;
}
