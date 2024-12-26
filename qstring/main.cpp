#include <QCoreApplication>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List, List2;

    List.append("Hello Dtsis");

    foreach(QString itm, List)
    {
        qDebug() << itm ;
    }

    QString Line = "a, b, c, d, e, f";

    List2 = Line.split(",");

    foreach(QString itm, List2)
    {
        qDebug() << itm;
    }

    List2.replaceInStrings( "b", "batman");
    QString After = List2.join(",");
    qDebug() << After;

    return a.exec();
}
