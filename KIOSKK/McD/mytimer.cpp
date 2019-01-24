#include "mytimer.h"
#include"QDebug"
#include<QString>
myTimer::myTimer(){
    // create a timer
    totalTime = 180;
    timer = new QTimer(this);

    // setup signal and slot
    connect(timer, SIGNAL(timeout()),
              this, SLOT(mCount()));

    // msec
    timer->start(1000);

}

void myTimer::mCount(){
    totalTime--;
    emit SiganlUpdateTimerUI(totalTime);
    qDebug() << "Timer..."+QString::number(totalTime);
    if(totalTime == -1)
        timer->stop();

}
