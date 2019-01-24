#ifndef PAYMENT_H
#define PAYMENT_H

#include <QWidget>
#include"mytimer.h"
namespace Ui {
class Payment;
}

class Payment : public QWidget
{
    Q_OBJECT
private:
    // 두 값을 비교하여 확인한다.
    QString InputValue; // 입력받는 값
    QString OTP; // 앱으로 보내는 값
public:
    explicit Payment(QWidget *parent = nullptr);
    ~Payment();

    QString GenerateOTP();

signals:
    void SignalSendingOTP(QString OTP);
    void SignalUpdatePassUI(void);
private slots:
    void on_push_send_otp_clicked();
    void on_psh_num_1_clicked();
    void on_psh_num_2_clicked();
    void on_psh_num_3_clicked();
    void on_psh_num_4_clicked();
    void on_psh_num_5_clicked();
    void on_psh_num_6_clicked();
    void on_psh_num_7_clicked();
    void on_psh_num_8_clicked();
    void on_psh_num_9_clicked();
    void on_psh_num_0_clicked();
    void on_psh_num_del_clicked();

    void UpdatePassUI();

    void on_push_fin_clicked();
    void UpdateTimerUI(int TIME);

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
