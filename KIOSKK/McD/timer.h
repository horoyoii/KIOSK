#ifndef TIMER_H
#define TIMER_H
#include<QThread>
#include<QTimer>
class Timer : public QThread
{
    Q_OBJECT
private:
    bool fin;
public:
    explicit Timer();
    void run();

signals:
    void SiganlUpdateTimerUI(int time);

public slots:
    void mCount(int time);
};















#endif // TIMER_H
