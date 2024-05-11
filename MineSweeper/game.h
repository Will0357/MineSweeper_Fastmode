#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QMessageBox>
#include <QDebug>
#include <QGraphicsScene>
#include <grid.h>
#include <QRandomGenerator>

class game: public QGraphicsScene
{
    Q_OBJECT

public:
    explicit game(QObject *parent = nullptr);
    void initialize(bool fastMode);
    void setWHM(int w,int h,int m);             //设置宽，高和雷数
    int getMarkNum(){return markNum;}
    int getMineNum(){return mineNum;}

private:
    static const int MAX_HEIGHT=24;
    static const int MAX_WIDTH=30;

    grid *grids[MAX_WIDTH][MAX_HEIGHT];

    int width=9;
    int height=9;                               //地图宽高
    int mineNum=10;                                //地雷数
    int markNum=0;                                 //标记的格子数
    int dugNum=0;                               //已挖掘的格子数
    int delta_x[8]={-1,0,1,-1,1,-1,0,1};        //分别对应某个点周围的八个点
    int delta_y[8]={1,1,1,0,0,-1,-1,-1};

signals:
    void s_start();
    void s_victory();
    void s_gameover();
    void s_changeLcdNum(int d);
    void s_notFound();

public slots:
    void onGameOver(int r,int c);
    void onFindOthers(int r,int c);               //当格子为空时自动挖掘周围的格子
    void onChangeMarkNum(int d);                          //右击格子改变旗帜数量
    void onCheckGame();                           //判断胜利条件与执行
    void onAddDugNum(){dugNum++;qDebug()<<"dug:"<<dugNum;}

};

#endif // GAME_H
