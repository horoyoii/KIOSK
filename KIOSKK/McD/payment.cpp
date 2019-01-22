#include "payment.h"
#include "ui_payment.h"

Payment::Payment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);
}

Payment::~Payment()
{
    delete ui;
}

void Payment::on_push_send_otp_clicked(){
    emit SignalSendingOTP();

}
