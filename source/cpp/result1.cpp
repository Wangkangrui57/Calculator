#include "source/h/result1.h"
#include "ui_result1.h"
#include <QFont>

Result1::Result1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Result1)
{
    ui->setupUi(this);
    QFont font("Microsoft YaHei", 10, 75);
    ui->CalculateName->setFont(font);
    ui->CalculateAll->setFont(font);
}

Result1::~Result1()
{
    delete ui;
}

//传递参数函数
void Result1::get_result(float Variable1, float Variable2){
    //传递结果的转化
    PmString="Pm:    "+QString::number(Variable1,'f',7);
    PnString="Pn:    "+QString::number(Variable2,'f',7);
    //单独显示结果
    ui->PmValue->setText(PmString);
    ui->PnValue->setText(PnString);
    //文本框显示全部结果
    insert_edit(PmString);
    insert_edit(PnString);
}

void Result1::insert_edit(QString String){
    ui->AllResult->insertPlainText(String.remove(QRegExp("\\s"))+'\n');

}
