#include "source/h/input1.h"
#include <QApplication>
#include "source/h/result1.h"
#include "source/h/choose.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Choose w;
    w.show();

    return a.exec();
}
