#include "payment.h"
#include "ui_payment.h"
#include<QDateTime>
#include<QDebug>
Payment::Payment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);
    ui->Background_label->setStyleSheet("QLabel { background-color : blue; color : white}");
    this->setFixedSize(600, 700);
    this->setStyleSheet("background-color:white;");
    InputValue = "";
    ui->pass_1->setGeometry(180, 120, 35, 35);
    ui->pass_2->setGeometry(240, 120, 35, 35);
    ui->pass_3->setGeometry(300, 120, 35, 35);
    ui->pass_4->setGeometry(360, 120, 35, 35);

    QPixmap pix("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\off.jpg");
    ui->pass_1->setPixmap(pix);
    ui->pass_1->setScaledContents(true);
    ui->pass_2->setPixmap(pix);
    ui->pass_2->setScaledContents(true);
    ui->pass_3->setPixmap(pix);
    ui->pass_3->setScaledContents(true);
    ui->pass_4->setPixmap(pix);
    ui->pass_4->setScaledContents(true);

    // Connect ===================================================
     QObject::connect(this, SIGNAL(SignalUpdatePassUI()), this, SLOT(UpdatePassUI()));

}

Payment::~Payment()
{
    delete ui;
}


void Payment::UpdatePassUI(){
    QPixmap pixOFF("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\off.jpg");
    QPixmap pixON("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\on.jpg");
    switch(InputValue.size()){
    case 0:
        ui->pass_1->setPixmap(pixOFF);
        ui->pass_1->setScaledContents(true);
        ui->pass_2->setPixmap(pixOFF);
        ui->pass_2->setScaledContents(true);
        ui->pass_3->setPixmap(pixOFF);
        ui->pass_3->setScaledContents(true);
        ui->pass_4->setPixmap(pixOFF);
        ui->pass_4->setScaledContents(true);
        break;
    case 1:
        ui->pass_1->setPixmap(pixON);
        ui->pass_1->setScaledContents(true);
        ui->pass_2->setPixmap(pixOFF);
        ui->pass_2->setScaledContents(true);
        ui->pass_3->setPixmap(pixOFF);
        ui->pass_3->setScaledContents(true);
        ui->pass_4->setPixmap(pixOFF);
        ui->pass_4->setScaledContents(true);
        break;
    case 2:
        ui->pass_1->setPixmap(pixON);
        ui->pass_1->setScaledContents(true);
        ui->pass_2->setPixmap(pixON);
        ui->pass_2->setScaledContents(true);
        ui->pass_3->setPixmap(pixOFF);
        ui->pass_3->setScaledContents(true);
        ui->pass_4->setPixmap(pixOFF);
        ui->pass_4->setScaledContents(true);
        break;
    case 3:
        ui->pass_1->setPixmap(pixON);
        ui->pass_1->setScaledContents(true);
        ui->pass_2->setPixmap(pixON);
        ui->pass_2->setScaledContents(true);
        ui->pass_3->setPixmap(pixON);
        ui->pass_3->setScaledContents(true);
        ui->pass_4->setPixmap(pixOFF);
        ui->pass_4->setScaledContents(true);
        break;
    case 4:
        ui->pass_1->setPixmap(pixON);
        ui->pass_1->setScaledContents(true);
        ui->pass_2->setPixmap(pixON);
        ui->pass_2->setScaledContents(true);
        ui->pass_3->setPixmap(pixON);
        ui->pass_3->setScaledContents(true);
        ui->pass_4->setPixmap(pixON);
        ui->pass_4->setScaledContents(true);
        break;
    }
}

void Payment::on_push_send_otp_clicked(){
    OTP = GenerateOTP();
    qDebug()<<OTP;
    emit SignalSendingOTP(OTP+"\n");

}


QString Payment::GenerateOTP(){
    QString OTP;
    qsrand(QDateTime::currentMSecsSinceEpoch() / 10);
    OTP+=QString::number(qrand()%10);
    OTP+=QString::number(qrand()%10);
    OTP+=QString::number(qrand()%10);
    OTP+=QString::number(qrand()%10);
    return OTP;
}


void Payment::on_psh_num_1_clicked(){
    if(InputValue.size() == 4)
        return;

    InputValue +="1";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_2_clicked(){
    if(InputValue.size() == 4)
        return;

    InputValue +="2";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_3_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="3";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_4_clicked(){
    if(InputValue.size() == 4)
        return;

    InputValue +="4";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_5_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="5";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_6_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="6";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_7_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="7";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_8_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="8";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_9_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="9";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_0_clicked()
{
    if(InputValue.size() == 4)
        return;

    InputValue +="0";
    emit SignalUpdatePassUI();
}

void Payment::on_psh_num_del_clicked(){
    if(InputValue.size() == 0)
        return;
    InputValue = InputValue.left(InputValue.size()-1);
    emit SignalUpdatePassUI();
}

void Payment::on_push_fin_clicked(){
    if(!OTP.compare(InputValue)){ // 결제 성공 시
        // TODO : 앱으로 메세지 전송 후 연결 종료
        this->close();
    }else{

    }

}
