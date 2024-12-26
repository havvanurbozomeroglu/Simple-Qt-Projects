#include "dialog.h"
#include "./ui_dialog.h"
#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString sPath = "C:/Users/Test-Toshiba/Desktop/havvanur-qt-deneme/";
    dirModel = new QFileSystemModel(this);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirModel->setRootPath(sPath);

    ui->treeView->setModel(dirModel);

    filemodel = new QFileSystemModel(this);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    filemodel->setRootPath(sPath);

    ui->listView->setModel(filemodel);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirModel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}

