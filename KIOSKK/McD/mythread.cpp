#include "mythread.h"
#include "item.h"
#include<QJsonArray>
MyThread::MyThread(qintptr ID, QObject *parent, Payment *py) :
    QThread(parent)
{
    this->py = py;
    this->socketDescriptor = ID;
}

void MyThread::run()
{
    // thread starts here
    qDebug() << " Thread started";

    socket = new QTcpSocket();

    // set the ID
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        // something's wrong, we just emit a signal
        emit error(socket->error());
        return;
    }

    // connect socket and signal
    // note - Qt::DirectConnection is used because it's multithreaded
    //        This makes the slot to be invoked immediately, when the signal is emitted.

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(py, SIGNAL(SignalSendingOTP(QString)), this, SLOT(send(QString)));
    connect(py, SIGNAL(SignalSendingResult(Basket)), this, SLOT(send(Basket)));
    // We'll have multiple clients, we want to know which is which
    qDebug() << socketDescriptor << " Client connected";

    // make this thread a loop,
    // thread will stay alive so that signal/slot to function properly
    // not dropped out in the middle when thread dies

    exec();
}

MyThread::~MyThread(){

}
void MyThread::readyRead(){
    // get the information
    QByteArray Data = socket->readAll();

    // will write on server side window
    qDebug() << socketDescriptor << " Data in: " << Data;

    socket->write(Data);
}

void MyThread::send(QString OTP){
    //QString qstrTest = "8924\n";
    QByteArray data = OTP.toLocal8Bit();
    qDebug("Send Called "+data);
    socket->write(data);
}

void MyThread::send(Basket basket){
     qDebug("Send Called ");
    // DONE : 결과를 앱에 전송하기
    //===========================================================
    QJsonObject obj = MakeJsonFormat(basket);


    qDebug()<<QJsonDocument(obj).toJson();
    socket->write(QJsonDocument(obj).toJson());
    socket->write("}$\n");


    // TOOD : Disconnection
    // signal을 보내어 myserver.cpp에서 thread를 delete ?
    //disconnected();
}

QJsonObject MyThread::MakeJsonFormat(Basket basket){
    QJsonObject obj;
    QJsonArray array;
    obj.insert("totalSum", basket.getTotalSum());
    vector<Item> list = basket.getList();
    QJsonObject *Item;
    for(auto &x : list){
        Item = new QJsonObject;
        Item->insert("kind", x.getKind());
        Item->insert("name", x.getName());
        Item->insert("option", x.getOption());
        Item->insert("price", x.getPrice());
        array.insert(0, *Item);
        delete Item;
    }

    obj.insert("List", array);
    return obj;
}

void MyThread::disconnected()
{
    qDebug() << socketDescriptor << " Disconnected";


    socket->deleteLater();
    //exit(0);
}
