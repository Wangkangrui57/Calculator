#ifndef CHOOSE_H
#define CHOOSE_H

#include <QDialog>
#include "input1.h"
#include "input2.h"

namespace Ui {
class Choose;
}

class Choose : public QDialog
{
    Q_OBJECT

public:
    explicit Choose(QWidget *parent = 0);
    ~Choose();

private slots:
    void slot_calculate1();
    void slot_calculate2();
    void slot_calculate3();
private:
    Ui::Choose *ui;

};

#endif // CHOOSE_H
