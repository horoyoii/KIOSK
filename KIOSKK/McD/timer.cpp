#include "timer.h"

Timer::Timer(){
    fin = true;

}

void Timer::run(){
    QTimer::singleShot(1000, this, SLOT(mCount(180)));

    exec();
}

void Timer::mCount(int time){
    qDebug("mCount called");
    emit SiganlUpdateTimerUI(time);
    QTimer::singleShot(1000, this, SLOT(mCount(time--)));

    qDebug("out exec");
}

