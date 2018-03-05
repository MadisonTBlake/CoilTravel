#include "coiltravel.h"
#include "ui_coiltravel.h"

CoilTravel::CoilTravel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CoilTravel)
{
    ui->setupUi(this);
}

CoilTravel::~CoilTravel()
{
    delete ui;
}
