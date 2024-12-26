#include <QCoreApplication>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir("C:/Users/Test-Toshiba/Desktop/havvanur-qt-deneme");

    qDebug() << mDir.exists();

    QDir fDir;
    QString fPath = "C:/Users/Test-Toshiba/Desktop/havvanur-qt-deneme/aaa";

    if(!fDir.exists(fPath))
    {
        fDir.mkpath(fPath);
        qDebug() << "Created!";
    }
    else{
        qDebug() << "Already exists!";
    }

    foreach (QFileInfo mitm, mDir.entryInfoList()) {
        if(mitm.isDir()) qDebug() << "Dir: " << mitm.absoluteFilePath();
        if(mitm.isFile()) qDebug() << "File: " << mitm.absoluteFilePath();

    }

    return a.exec();
}
