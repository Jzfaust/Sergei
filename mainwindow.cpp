#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QAction>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setSceneRect(0,0,500,500);

}
static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 10) - low) + low);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{

    ui->graphicsView->setScene(fr);
    fr->clear();
}

void MainWindow::on_action_3_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (1).jpg"));
    gh->setPos(randomBetween(30,200),randomBetween(30,200));
    ui->graphicsView->setScene(fr);
    gh->show();
     gh->setFlag(QGraphicsItem::ItemIsMovable);
}

void MainWindow::on_action_5_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (2).jpg"));
    gh->setPos(199,66);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);
}

void MainWindow::on_action_6_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (7).jpg"));
    gh->setPos(randomBetween(30,300),randomBetween(30,300));
    ui->graphicsView->setScene(fr);
    gh->show();
     gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_action_7_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (3).jpg"));
    gh->setPos(200,66);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_action_8_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (4).jpg"));
    gh->setPos(300,66);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_action_9_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (5).jpg"));
    gh->setPos(40,120);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_action_10_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (6.1).jpg"));
    gh->setPos(350,80);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);


}

void MainWindow::on_action_11_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (6.2).jpg"));
    gh->setPos(170,70);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);

}


void MainWindow::on_action_12_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get.jpg"));
    gh->setPos(250,70);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_action_13_triggered()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (9).jpg"));
    gh->setPos(200,60);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_action_14_triggered()
{
 close();

}


void MainWindow::on_action_2_triggered()
{


}
