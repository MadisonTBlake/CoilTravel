#include "coiltravel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CoilTravel w;
    w.show();

    return a.exec();
}
