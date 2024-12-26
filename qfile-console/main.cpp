#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString Filename){
    QFile mFile(Filename);

    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "could not open file for writting";
        return;
    }

    QTextStream out (&mFile);
    out << "hellohello";

    mFile.flush();
    mFile.close();
}

void Read(QString Filename){
    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "could not open file for reading";
        return;
    }

    QTextStream in (&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "C:/Users/Test-Toshiba/Desktop/havvanur-qt-deneme/myfile2.txt";

    Write(mFilename);
    Read(mFilename);

    return a.exec();
}
