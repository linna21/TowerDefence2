#ifndef PEASHOOTER_H
#define PEASHOOTER_H

#include <QObject>
#include <QPoint>
#include <QPixmap>
#include <QRect>
class PeaShooter : public QObject
{
    Q_OBJECT
public:
    PeaShooter();
    //发射子弹
    void shoot();
    //设置位置
    void setPoisition(int x,int y);
    QPixmap peashooter;
    int p_x;
    int p_y;
    //植物的矩形边框
    QRect p_Rect;

signals:

};

#endif // PEASHOOTER_H
