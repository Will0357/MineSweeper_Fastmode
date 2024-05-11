#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gm = new game;
    scene_img = new clickGraphics;
    QStatusBar *stBar = this->statusBar();
    timer = new QTimer(this);
    timeLabel=new QLabel(this);
    setSelfDefined=new setting;

    //设置表情,计数器,计时器
    connect(gm,&game::s_changeLcdNum,this,[=](){
        this->ui->lcdNumber_flag->display(gm->getMarkNum());
    });
    connect(gm,&game::s_start,this,[=](){
        scene_img->addImage(1);
        ui->lcdNumber_flag->display(0);
        ui->lcdNumber_mine->display(gm->getMineNum());
        time->setHMS(0,0,0);
        timeLabel->setText("用时："+time->toString("hh:mm:ss"));
    });
    connect(gm,&game::s_victory,this,[=](){
        scene_img->addImage(2);
        //timeLabel->setText("用时："+time->toString("hh:mm:ss"));
        timer->stop();

        QMessageBox msg(QMessageBox::Warning,"","成功通关",QMessageBox::Yes|QMessageBox::No);
        msg.setButtonText(QMessageBox::Yes,"再来一局");
        msg.setButtonText(QMessageBox::No,"取消");
        int ret=msg.exec();
        if(ret==QMessageBox::Yes){
            timer->start(1000);
            gm->initialize(fastMode);
        }
    });
    connect(gm,&game::s_gameover,this,[=](){
        scene_img->addImage(3);
        //timeLabel->setText("用时："+time->toString("hh:mm:ss"));
        timer->stop();

        QMessageBox msg(QMessageBox::Question,"","游戏失败T_T",QMessageBox::Yes|QMessageBox::No);
        msg.setButtonText(QMessageBox::Yes,"重新开始");
        msg.setButtonText(QMessageBox::No,"取消");
        int ret=msg.exec();
        if(ret==QMessageBox::Yes){
            timer->start(1000);
            gm->initialize(fastMode);
        }
    });
    connect(scene_img,&clickGraphics::s_changeMode,this,[=](bool type){       //更新改变模式后的图标,同时重新开局
        scene_img->addImage(1);
        fastMode=type;
        timer->start(1000);
        gm->initialize(fastMode);
    });
    connect(gm,&game::s_notFound,this,[=](){
        scene_img->addImage(4);
    });
    ui->graphicsView_image->setScene(scene_img);
    ui->graphicsView->setScene(gm);

    //设置主界面
    setWindowTitle("扫雷 1.0");                                                //设置标题
    setWindowFlags(Qt::WindowCloseButtonHint);                                //去掉最大最小化按钮
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);   //去掉滚动框
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setGameBoard(9,9,10);                                                     //初始大小为9*9,10

    //状态栏设置用时
    stBar->addWidget(timeLabel);
    time=new QTime(0,0,0);
    timer->start(1000);
    connect(timer,&QTimer::timeout,this,[=](){
        *time=time->addSecs(1);
        timeLabel->setText("用时："+time->toString("hh:mm:ss"));
    });



    //设置菜单栏
      connect(ui->action,&QAction::triggered,this,[=](){
          timer->start(1000);
          gm->initialize(fastMode);
      });
      connect(ui->action_primary,&QAction::triggered,this,[=](){
          setGameBoard(9,9,10);
      });
      connect(ui->action_medium,&QAction::triggered,this,[=](){
          setGameBoard(20,16,50);
      });
      connect(ui->action_advanced,&QAction::triggered,this,[=](){
          setGameBoard(30,24,120);
      });
      connect(ui->actionuser_defined,&QAction::triggered,this,[=](){
          setSelfDefined->show();
      });
      connect(setSelfDefined,&setting::s_setDefined,this,&MainWindow::setGameBoard);
      connect(ui->action_about,&QAction::triggered,this,[=](){
          QMessageBox msg;
          msg.setText("有事联系qq：1666060437~");
          msg.exec();
      });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGameBoard(int width, int height, int mineNum)
{
    this->show();
    gm->setWHM(width,height,mineNum);
    timer->start(1000);
    gm->initialize(fastMode);
    this->setFixedSize(20*width+22,20*height+110);
    ui->graphicsView->setFixedSize(20*width,20*height);
}
