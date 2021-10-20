#include "source/h/input2.h"
#include "ui_input2.h"

Input2::Input2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Input2)
{
    ui->setupUi(this);
    QFont font("Microsoft YaHei", 10, 75);
    ui->CalculateName->setFont(font);

}

Input2::~Input2()
{
    delete ui;
}
