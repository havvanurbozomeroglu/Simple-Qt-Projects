#include "dialog.h"
#include "./ui_dialog.h"
#include <QTreeWidgetItem>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabels(QStringList() << "one" << "two");
    AddRoot("1 Qt","Django");
    AddRoot("2 Qt","Django");
    AddRoot("3 Qt","Django");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::AddRoot(QString name, QString Descripton){
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, Descripton);
   // ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm,"one","two");
    AddChild(itm,"mysql","sql");
}
void Dialog::AddChild(QTreeWidgetItem *parent, QString name, QString Descripton){
    QTreeWidgetItem *itm = new QTreeWidgetItem(); //ui->treeWidget
    itm->setText(0, name);
    itm->setText(1, Descripton);
    parent->addChild(itm);
}

void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackground(0, Qt::red);
    ui->treeWidget->currentItem()->setBackground(1, Qt::blue);
}

