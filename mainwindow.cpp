#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap backGround("C:\\Users\\saidh\\OneDrive\\Pulpit\\QtProject\\VisualisationProject\\background.png");
    backGround = backGround.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window,backGround);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}
