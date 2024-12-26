#include <QCoreApplication>
#include <QList>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    qDebug() << "Listeye eklendi";

    for(int i = 0; i < 10; i++)
    {
        List.append(i);
    }

    qDebug() << "Listeden 5 sayisi cikarildi";

    List.removeOne(5);

    qDebug() << "Liste ekrana yazdiriliyor";

    foreach(int mNumber, List)
    {
        qDebug() << mNumber;
    }


    QListIterator<int> Iter(List);

    qDebug() << "Listenin iterator degerleri ekrana yazdiriliyor";

    while(Iter.hasNext())
    {
        qDebug() << Iter.next();
    }

    qDebug() << "Listenin iterator degerleri geriden yazdiriliyor";

    Iter.toBack();

    while(Iter.hasPrevious())
    {
        qDebug() << Iter.previous();
        if(Iter.hasPrevious())
        {
            qDebug() << "next..." << Iter.peekPrevious();
        }
    }

    qDebug() << " QMutableListIterator ";


    QMutableListIterator<int> Iter2(List);
    while(Iter2.hasNext())
    {
        int i = Iter2.next();
        if(i == 5)
        {
            Iter2.remove();
        }
    }

    Iter2.toFront();

    while(Iter2.hasNext())
    {
        qDebug() << Iter2.next();
    }


    return a.exec();
}
