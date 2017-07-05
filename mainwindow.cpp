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

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (1).jpg"));
gh->setPos(200,10);
ui->graphicsView->setScene(fr);
gh->show();
 gh->setFlag(QGraphicsItem::ItemIsMovable);
}


void MainWindow::on_pushButton_3_clicked()
{

    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (7).jpg"));
    gh->setPos(235,39);
    ui->graphicsView->setScene(fr);
    gh->show();
     gh->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_pushButton_2_clicked()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (2).jpg"));
    gh->setPos(199,66);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);
}

void MainWindow::on_pushButton_4_clicked()
{
    QGraphicsPixmapItem *gh=fr->addPixmap(QPixmap(":/Images/get (3).jpg"));
    gh->setPos(200,66);
    ui->graphicsView->setScene(fr);
    gh->show();
    gh->setFlag(QGraphicsItem::ItemIsMovable);
}
