#ifndef MYTIMER_H
#define MYTIMER_H
#include<QTimer>

class myTimer : public QObject{
    Q_OBJECT
private:
    int totalTime;
public:
    myTimer();
    QTimer *timer;

signals:
    void SiganlUpdateTimerUI(int n);

public slots:
    void mCount();
};

#endif // MYTIMER_H
