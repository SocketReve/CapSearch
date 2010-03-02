#include <QtGui/QApplication>
#include "capwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CapWindow w;
    w.show();
    return a.exec();
}
