#include "setting.h"
#include "ui_setting.h"

setting::setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setting)
{

    ui->setupUi(this);

    ui->spinBox_width->setRange(9,30);
    ui->spinBox_height->setRange(9,24);
    ui->spinBox_mine->setRange(1,81);
    ui->spinBox_mine->setValue(10);
}

setting::~setting()
{
    delete ui;
}

void setting::on_pushButton_clicked()
{
    width=ui->spinBox_width->value();
    height=ui->spinBox_height->value();
    mineNum=ui->spinBox_mine->value();
    emit s_setDefined(width,height,mineNum);
    this->close();
}

//雷数不能大于宽*高
void setting::on_spinBox_width_valueChanged(int arg1)
{
    ui->spinBox_mine->setRange(1,arg1 * ui->spinBox_height->value());
}


void setting::on_spinBox_height_valueChanged(int arg1)
{
    ui->spinBox_mine->setRange(1,arg1 * ui->spinBox_width->value());
}
