#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Setting MainWindow ==========================================================
    this->setFixedSize(1080, 1650);
    this->setStyleSheet("background-color:white;");

   //==============================================================================
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\banner.jpg");
    ui->label->setPixmap(pix);



    // Create a Basket =============================================================
    basket = new Basket();

    // DB open =====================================================================




}









//프로그램을 원하는 위치까지 이동시킨 다음 타이틀바를 제거하기 위하여
// (원하는 위치까지 이동 후) 마우스를 클릭하게 되면 타이틀바가 사라지게 된다.
void MainWindow::mousePressEvent(QMouseEvent *event){
    if(event->button() & Qt::LeftButton){
        this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint); // hide the title bar
        this->show();
    }
}








MainWindow::~MainWindow()
{
    delete ui;
}


