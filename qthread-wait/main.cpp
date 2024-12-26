#include <QCoreApplication>
#include "mythread.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread;

    mThread.start();

    mThread.wait();
    qDebug() << "Donee!!";

    return a.exec();
}
