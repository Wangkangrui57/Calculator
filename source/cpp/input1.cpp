#include "source/h/input1.h"
#include <ui_input1.h>
#include <QDebug>
#include <QFont>

Input1::Input1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Input1)
{
    //ui界面初始化
    ui->setupUi(this);
    QFont font("Microsoft YaHei", 10, 75);
    ui->CalculateName->setFont(font);

    //信号与槽
    connect(ui->CalculateBtn,SIGNAL(clicked(bool)),this,SLOT(slot_calculate()));
    connect(ui->ResetBtn,SIGNAL(clicked(bool)),this,SLOT(slot_reset()));

}

Input1::~Input1()
{
    delete ui;
}

//计算函数
void Input1::slot_calculate(){
    //输入数据获取和转化
    mString=ui->mInput->text();
    nString=ui->nInput->text();
    pmString=ui->pmInput->text();
    pnString=ui->pnInput->text();
    m=mString.toFloat();
    n=nString.toFloat();
    pm=pmString.toFloat();
    pn=pnString.toFloat();
    //计算傅里叶像素大小
    Pm=1/(pm*m);
    Pn=1/(pm*n);
    Result1 *wResult1=new Result1();
    wResult1->get_result(Pm,Pn);
    wResult1->show();
}

void Input1::slot_reset(){
    ui->mInput->setText("");
    ui->nInput->setText("");
    ui->pmInput->setText("");
    ui->pnInput->setText("");
}
