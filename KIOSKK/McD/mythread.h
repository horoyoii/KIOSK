#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include"payment.h"

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(qintptr ID, QObject *parent = 0, Payment *py = 0);

    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();
    void send(QString OTP);

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    Payment *py;
};

#endif // MYTHREAD_H
