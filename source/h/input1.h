#ifndef INPUT1_H
#define INPUT1_H

#include <QDialog>
#include <QFont>
#include "result1.h"

namespace Ui {
class Input1;
}

class Input1 : public QDialog
{
    Q_OBJECT

public:
    explicit Input1(QWidget *parent = 0);
    ~Input1();

private slots:
    void slot_calculate();
    void slot_reset();
private:
    Ui::Input1 *ui;
    QString mString;
    QString nString;
    QString pmString;
    QString pnString;
    float m;
    float n;
    float pm;
    float pn;
    float Pm;
    float Pn;

};

#endif // INPUT_H
