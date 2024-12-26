#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QtHttpServer/QHttpServer>
#include <QFile>
#include <QDebug>



class Downloader : public QObject
{
    Q_OBJECT
public:
    explicit Downloader(QObject *parent = nullptr);

signals:

public slots:

};

#endif // DOWNLOADER_H
