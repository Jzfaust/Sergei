#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

    void on_action_8_triggered();

    void on_action_9_triggered();

    void on_action_10_triggered();

    void on_action_11_triggered();

    void on_action_12_triggered();

    void on_action_13_triggered();

    void on_action_14_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
private:
    QGraphicsScene *fr=new QGraphicsScene;

};

#endif // MAINWINDOW_H
