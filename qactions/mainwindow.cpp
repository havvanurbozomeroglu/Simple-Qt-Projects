#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->progressBar->setValue(ui->horizontalSlider->value());

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int))
            ,ui->progressBar,SLOT(setValue(int)));

    StatusLabel = new QLabel(this);
    StatusBar = new QProgressBar(this);

    ui->statusbar->addPermanentWidget(StatusLabel);
    ui->statusbar->addPermanentWidget(StatusBar,1);

    StatusBar->setTextVisible(false);
    StatusLabel->setText("dtsis");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    ui->statusbar->showMessage("Open");
    QMessageBox::information(this, "title","open!!" );
}


void MainWindow::on_actionNew_triggered()
{
    ui->statusbar->showMessage("New");
    QMessageBox::information(this,"title","new!!");
}


void MainWindow::on_actionSave_triggered()
{
    ui->statusbar->showMessage("Save");
    QMessageBox::information(this, "title", "save!!");
}


void MainWindow::on_actiondo_something_triggered()
{
    ui->statusbar->showMessage("hello");
    StatusBar->setValue(45);
}

