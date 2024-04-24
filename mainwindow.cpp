#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    /*
    setAttribute(Qt::WA_StyledBackground, true);
    QPixmap backgroundImage(":/newBackground.png");
    QPalette palette;
    palette.setBrush(QPalette::Window, backgroundImage.scaled(size())); // Scale image to fit window size
    setPalette(palette);
    this->setPalette(palette);
    */
    //palette.setBrush(QPalette::Window, Qt::transparent);

    //this->setAttribute(Qt::WA_TranslucentBackground, true);
    //this->setStyleSheet("background: transparent;");
    //this->setAutoFillBackground(true);



    // Set the size policy of the label to expand and maintain aspect ratio;

    // Set layout to central widget


    // Create a label to hold the background image
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    //setAttribute(Qt::WA_TranslucentBackground);
    setMouseTracking(true);


    ui->LivingroomTermometer->hide();
    ui->BathroomTermometer->hide();
    ui->UpstairsBigBedroomTermometer->hide();
    ui->UpstairsSmallBedroomTermometer->hide();
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        // Save the click position relative to the window position
        dragStartPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        // Move the window according to the click position
        move(event->globalPosition().toPoint() - dragStartPosition);
        event->accept();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LivingroomButton_clicked()
{
    ui->LivingroomTermometer->setHidden(false);
}


void MainWindow::on_TurnoffButton_clicked()
{
    ui->LivingroomTermometer->hide();
}

void MainWindow::on_BathroomButton_clicked()
{
    ui->BathroomTermometer->setHidden(false);
}


void MainWindow::on_TurnoffButton_2_clicked()
{
    ui->BathroomTermometer->hide();
}


void MainWindow::on_UpstairsBigBedroomButton_clicked()
{
    ui->UpstairsBigBedroomTermometer->setHidden(false);
}


void MainWindow::on_TurnoffButton_3_clicked()
{
    ui->UpstairsBigBedroomTermometer->hide();
}


void MainWindow::on_UpstairsSmallBedroomButton_clicked()
{
    ui->UpstairsSmallBedroomTermometer->setHidden(false);
}


void MainWindow::on_TurnoffButton_4_clicked()
{
    ui->UpstairsSmallBedroomTermometer->hide();
}


void MainWindow::on_ShutDownButton_clicked()
{
    this->close();
}

