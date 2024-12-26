#include "dialog.h"
#include "./ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this, "Dtsis", "yes, Dtsis!!!");
    }
    else{
        QMessageBox::information(this, "Dtsis", "no, Dtsis!!!");
    }
}


void Dialog::on_pushButton_2_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this,"Title", ui->radioButton->text());
    }
    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this,"Title", ui->radioButton_2->text());
    }
}

