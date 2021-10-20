#ifndef RESULT2_H
#define RESULT2_H

#include <QDialog>

namespace Ui {
class Result2;
}

class Result2 : public QDialog
{
    Q_OBJECT

public:
    explicit Result2(QWidget *parent = 0);
    ~Result2();

private:
    Ui::Result2 *ui;
};

#endif // RESULT2_H
