#include "mywindow.h"
#include "mybutton.h"
#include "window2.h"
#include "tower.h"
#include <QPixmap>
#include <QPainter>
#include <QTimer>

Window2::Window2(QWidget *parent) : QMainWindow(parent)
{
     this->setFixedSize(1250,550);
 //返回按钮
        MyButton * rbtn=new MyButton(":/returnbtn.png");
        rbtn->setParent(this);
        rbtn->move(50,50);
        connect(rbtn,&QPushButton::clicked,this,[=](){
            rbtn->down();
            rbtn->up();
        });

        connect(rbtn,&MyButton::clicked,this,[=](){
            QTimer::singleShot(200,this,[=](){
                emit chooseBack(); //发送返回信号
            });
        });


}
void Window2::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pixmap(":/background2.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
 //放置除草机
    pixmap.load(":/lawncleaner.png");
    painter.drawPixmap(165,90,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,180,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,270,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,360,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,450,pixmap.width(),pixmap.height(),pixmap);

}

