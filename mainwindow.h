#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QtWidgets>
#include <QVBoxLayout>
#include <QMouseEvent>

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

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private slots:
    void on_LivingroomButton_clicked();

    void on_TurnoffButton_clicked();

    void on_BathroomButton_clicked();

    void on_TurnoffButton_2_clicked();

    void on_UpstairsBigBedroomButton_clicked();

    void on_TurnoffButton_3_clicked();

    void on_UpstairsSmallBedroomButton_clicked();

    void on_TurnoffButton_4_clicked();

    void on_ShutDownButton_clicked();

private:
    Ui::MainWindow *ui;
    QPoint dragStartPosition;

};
#endif // MAINWINDOW_H
