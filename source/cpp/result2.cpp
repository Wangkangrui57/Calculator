#include "source/h/result2.h"
#include "ui_result2.h"

Result2::Result2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Result2)
{
    ui->setupUi(this);
}

Result2::~Result2()
{
    delete ui;
}
