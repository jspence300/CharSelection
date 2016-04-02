#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_randName_clicked()
{
    updateName();
}
void MainWindow::updateName()
{
    subNum1 = (rand() % 4);

    ui->nameDisplay->setText(cName[subNum1]);
}


void MainWindow::on_randClass_clicked()
{
    updateClass();
}
void MainWindow::updateClass()
{
    subNum2 = (rand() % 4);
    ui->classDisplay->setText(cClass[subNum2]);
}


void MainWindow::on_randGender_clicked()
{
    updateGender();
}
void MainWindow::updateGender()
{
    subNum3 = (rand() % 2);
    genD = gender[subNum3];
    ui->genderDisplay->setText(gender[subNum3]);
}
