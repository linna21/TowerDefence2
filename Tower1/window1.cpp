#include "mywindow.h"
#include "mybutton.h"
#include "window1.h"
#include "tower.h"
#include "cardlist.h"
#include <QPixmap>
#include <QPainter>
#include <QTimer>


Window1::Window1(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(1250,550);
//返回按钮
    MyButton * rbtn=new MyButton(":/returnbtn.png");
    rbtn->setParent(this);
    rbtn->move(1100,50);
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
void Window1::uiSetup(){
    CardList *card = new SunFlowerCard(this);
    card->setIndex(0);
    Cards.append(card);
    CardList *card_2 = new PeaShooterCard(this);
    card_2->setIndex(1);
    Cards.append(card_2);
    CardList *card_3 = new PotatoCard(this);
    card_3->setIndex(2);
    Cards.append(card_3);
    CardList *card_4 = new PeaShooter2Card(this);
    card_4->setIndex(4);
    Cards.append(card_4);
    CardList *card_5 = new PotatoMineCard(this);
    card_5->setIndex(5);
    Cards.append(card_5);
    CardList *card_6 = new FireTreeCard(this);
    card_6->setIndex(6);
    Cards.append(card_6);
    CardList *card_7 = new CherryBombCard(this);
    card_7->setIndex(7);
    Cards.append(card_7);
    CardList *card_8 = new IcePeaShooterCard(this);
    card_8->setIndex(3);
    Cards.append(card_8);
    CardList *shovel = new Shovel(this);
    Cards.append(shovel);
}
void Window1::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pixmap(":/background1.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
//放置除草机
    pixmap.load(":/lawncleaner.png");
    painter.drawPixmap(165,90,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,180,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,270,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,360,pixmap.width(),pixmap.height(),pixmap);
    painter.drawPixmap(165,450,pixmap.width(),pixmap.height(),pixmap);
    pixmap.load(":/PeaShooter.png");
    painter.drawPixmap(100,10,pixmap.width(),pixmap.height(),pixmap);

}

