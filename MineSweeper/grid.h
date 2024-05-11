#ifndef GRID_H
#define GRID_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

class grid: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

    int row,col;    //行，列
    int content=0;  //0~8为周围的雷数，9表示本身是雷
    bool isDug=false;   //是否被挖掘
    bool isMark=false;  //是否被标记

public:
    grid();    
    grid(int r, int c):row(r),col(c){}
    void leftClicked();
    void rightClicked();
    void setCont(int num){content = num;}
    int& getCont(){return content;}
    bool& getIsDug(){return isDug;}
    void showGrid();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event)override;

signals:
    void s_check();
    void s_changeMarkNum(int d);
    void s_findMine(int r, int c);
    void s_findNone(int r, int c);
    void s_isDug();
};

#endif // GRID_H
