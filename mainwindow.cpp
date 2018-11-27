#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamelogic.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    GameLogic gl(ui->widget->size());
}

MainWindow::~MainWindow()
{
    delete ui;
}
