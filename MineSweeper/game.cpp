#include "game.h"

game::game(QObject *parent):QGraphicsScene(parent)
{

}

void game::initialize(bool fastMode)
{
    QGraphicsScene::clear();
    markNum=0;
    dugNum=0;
    emit s_start();

    //创建格子，建立连接
    for(int i=0;i<MAX_WIDTH;++i)
        for(int j=0;j<MAX_HEIGHT;++j){
            grids[i][j]=new grid(i,j);
            grids[i][j]->setPos(i*20,j*20);
            connect(grids[i][j],&grid::s_findMine,this,&game::onGameOver);
            connect(grids[i][j],&grid::s_findNone,this,&game::onFindOthers);
            connect(grids[i][j],&grid::s_check,this,&game::onCheckGame);
            connect(grids[i][j],&grid::s_changeMarkNum,this,&game::onChangeMarkNum);
            connect(grids[i][j],&grid::s_isDug,this,&game::onAddDugNum);
        }

    //显示格子
    for(int i=0;i<width;++i){
        for(int j=0;j<height;++j){
            addItem(grids[i][j]);
            grids[i][j]->setPixmap(QPixmap("://image/initial.jpg"));
        }
    }

    //随机设置地雷坐标
    int mine=0;
    while(mine < mineNum){
        int x=QRandomGenerator::global()->bounded(width);
        int y=QRandomGenerator::global()->bounded(height);
        if(grids[x][y]->getCont()!=9){
            grids[x][y]->setCont(9);            //埋雷
            mine++;
        }
    }

    //得到(x0,y0)点周围有多少雷,即确定每个格子的数字
    for(int x0=0;x0<width;x0++)
        for(int y0=0;y0<height;y0++){
            if(grids[x0][y0]->getCont()==9)     //本身不能是雷
                continue;
            for(int i=0;i<8;++i){
                int x=x0+delta_x[i];
                int y=y0+delta_y[i];
                if(0<=x&&x<width && 0<=y&&y<height)
                    if(grids[x][y]->getCont()==9)
                        grids[x0][y0]->getCont()++;
            }
        }

    //快捷模式下开局自动随机寻找一次空白方块
    if(fastMode){
        //生成一个width*height大小的随机数组
        int maxNum=width*height;
        int num[maxNum];
        for(int i=0;i<maxNum;i++)
            num[i]=i;
        for(int i=0;i<maxNum;i++){
            int randNum=QRandomGenerator::global()->bounded(i,maxNum-1);qDebug()<<randNum;
            std::swap(num[i],num[randNum]);
        }
        //遍历数组,每个数都可以对应唯一的坐标
        bool found=false;
        for(int i=0;i<maxNum;i++){
            int x=num[i]/width;
            int y=num[i]%width;
            if(grids[x][y]->getCont()==0){//qDebug()<<x<<y;
                grids[x][y]->leftClicked();
                found=true;
                break;
            }
        }
        if(!found)
            emit s_notFound();
    }
}

void game::setWHM(int w, int h, int m)
{
    width = w;
    height = h;
    mineNum = m;
}

void game::onGameOver(int r,int c)
{
    for(int rr=0;rr<width;rr++)
        for(int cc=0;cc<height;cc++){
            if(rr==r && cc==c)continue;         //踩到的雷不要变
            if(grids[rr][cc]->getIsDug()==false)
                grids[rr][cc]->showGrid();
            if(grids[rr][cc]->getCont()==9)
                grids[rr][cc]->setPixmap(QPixmap("://image/mine.jpg"));
        }
    emit s_gameover();
}

void game::onFindOthers(int r, int c)           //递归寻找空的
{
    qDebug()<<"findOthers() called";

    for(int i=0;i<8;i++){
        int x=r+delta_x[i], y=c+delta_y[i];
        if(0<=x&&x<width && 0<=y&&y<height)
            if(grids[x][y]->getIsDug()==false && grids[x][y]->getCont()<=9){
                grids[x][y]->leftClicked();
        }
    }
}

void game::onChangeMarkNum(int d)
{
    if(d==1)markNum++;
    if(d==-1)markNum--;
    emit s_changeLcdNum(d);
    qDebug()<<"markNum:"<<markNum;
}

void game::onCheckGame()
{
    if(dugNum==width*height-mineNum)
        emit s_victory();
}
