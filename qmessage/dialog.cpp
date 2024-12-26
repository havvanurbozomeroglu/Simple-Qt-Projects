#include "dialog.h"
#include "./ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"title","information");
}


void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"title","Do you like QT?",QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes){
        QMessageBox::information(this,"title","you like QT");
    }
}


void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::warning(this,"title","warning");
}


void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::question(this, "title","custom",QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No | QMessageBox::NoToAll);
}

