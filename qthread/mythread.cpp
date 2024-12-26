#include "mythread.h"
#include <QtCore>
#include <QDebug>

MyThread::MyThread()
{

}

void MyThread::run(){
    qDebug() << this->name << "Running";

    for(int i = 0; i < 10000; i++){
        QMutex mutex;
        mutex.lock();

        if(this->Stop){
            break;
        }

        mutex.unlock();
        this->sleep(1000);
        qDebug() << this->name << i;
    }
}
