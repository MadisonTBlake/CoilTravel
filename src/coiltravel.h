#ifndef COILTRAVEL_H
#define COILTRAVEL_H

#include <QMainWindow>

namespace Ui {
class CoilTravel;
}

class CoilTravel : public QMainWindow
{
    Q_OBJECT

public:
    explicit CoilTravel(QWidget *parent = 0);
    ~CoilTravel();

private:
    Ui::CoilTravel *ui;
};

#endif // COILTRAVEL_H
