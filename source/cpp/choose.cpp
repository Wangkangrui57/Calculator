#include "source/h/choose.h"
#include "ui_choose.h"

Choose::Choose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Choose)
{
    ui->setupUi(this);
    connect(ui->Calculate1,SIGNAL(clicked(bool)),this,SLOT(slot_calculate1()));
    connect(ui->Calculate2,SIGNAL(clicked(bool)),this,SLOT(slot_calculate2()));
    connect(ui->Calculate3,SIGNAL(clicked(bool)),this,SLOT(slot_calculate3()));
}

Choose::~Choose()
{
    delete ui;
}
void Choose::slot_calculate1(){
    Input1 *wInput1=new Input1();
    wInput1->show();
}

void Choose::slot_calculate2(){
    Input2 *wInput2=new Input2();
    wInput2->show();
}

void Choose::slot_calculate3(){

}
