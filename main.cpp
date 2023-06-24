
#include "widget.h"

#include <QApplication>



int main(int argc, char** argv)
{
    QApplication a(argc, argv);
    CallerCalculator wgt;
    wgt.resize(400, 400);
    wgt.show();
    return a.exec();
}
