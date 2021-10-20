#ifndef RESULT1_H
#define RESULT1_H

#include <QDialog>
#include "input1.h"

namespace Ui {
class Result1;
}

class Result1 : public QDialog
{
    Q_OBJECT

public:
    explicit Result1(QWidget *parent = 0);
    ~Result1();
    QString PmString;
    QString PnString;
    void get_result(float Variable1,float Variable2);

private:
    Ui::Result1 *ui;
    void insert_edit(QString String);
};

#endif // RESULT1_H
