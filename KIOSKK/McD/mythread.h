#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include"payment.h"
#include"basket.h"
#include<QJsonDocument>
#include<QJsonObject>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(qintptr ID, QObject *parent = 0, Payment *py = 0);
    ~MyThread();
    void run();
    QJsonObject MakeJsonFormat(Basket basket);
signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();
    void send(QString OTP); // 앱으로 OTP 전송
    void send(Basket basket); // 앱으로 결제내역 전송

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    Payment *py;
};

#endif // MYTHREAD_H
