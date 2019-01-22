// myserver.h

#ifndef MYSERVER_H
#define MYSERVER_H
#include"payment.h"
#include <QTcpServer>

class MyServer : public QTcpServer
{
    Q_OBJECT
private:
    Payment* py;
public:
    explicit MyServer(QObject *parent = 0);
    void startServer(Payment *py);
signals:

public slots:

protected:
    void incomingConnection(qintptr socketDescriptor);

};

#endif // MYSERVER_H
