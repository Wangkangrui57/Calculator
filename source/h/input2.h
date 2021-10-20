#ifndef INPUT2_H
#define INPUT2_H

#include <QDialog>
#include "result2.h"

namespace Ui {
class Input2;
}

class Input2 : public QDialog
{
    Q_OBJECT

public:
    explicit Input2(QWidget *parent = 0);
    ~Input2();

private:
    Ui::Input2 *ui;
};

#endif // INPUT2_H
