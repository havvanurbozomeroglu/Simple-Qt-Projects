#include <QCoreApplication>
#include <QMap>
#include <QHash>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<int, QString> Employees;

    Employees.insert(1, "Bob");
    Employees.insert(2, "Chad");
    Employees.insert(3, "Alex");
    Employees.insert(4, "John");


    foreach(int i, Employees.keys())
    {
        qDebug() << Employees[i];
    }

    QMapIterator<int, QString> Iter(Employees);

    while(Iter.hasNext())
    {
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }

    qDebug() << "QHash!!!";

    QHash<int, QString> Employees2;

    Employees2.insert(1, "Bob");
    Employees2.insert(2, "Chad");
    Employees2.insert(3, "Alex");
    Employees2.insert(4, "John");

    qDebug() << "3  =  " << Employees2.value(3);

    foreach(int i, Employees2.keys())
    {
        qDebug() << Employees2[i];
    }

    QHashIterator<int, QString> Iter2(Employees2);

    while(Iter2.hasNext())
    {
        Iter2.next();
        qDebug() << Iter2.key() << " = " << Iter2.value();
    }

    return a.exec();
}
