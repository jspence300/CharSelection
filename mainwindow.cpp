#include "mainwindow.h"
#include "ui_mainwindow.h"


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
    classN = cClass[subNum2];
    ui->classDisplay->setText(classN);
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
void MainWindow::updateStats()
{
    if(classN == "Warrior")
    {
        stamina = 30;
        strength = 100;
        intellect = 0;
        spirit = 0;
    }
    else if(classN == "Paladin")
    {
        stamina = 50;
        strength = 100;
        intellect = 25;
        spirit = 10;
    }
    else if(classN == "Warlock")
    {
        stamina = 35;
        strength = 0;
        intellect = 110;
        spirit = 50;
    }
    else if(classN == "Druid")
    {
        stamina = 35;
        strength = 0;
        intellect = 100;
        spirit = 85;
    }
    ui->staLabel->setText(QString::number(stamina));
    ui->strLabel->setText(QString::number(strength));
    ui->sprLabel->setText(QString::number(spirit));
    ui->intLabel->setText(QString::number(intellect));
}

void MainWindow::on_cStats_clicked()
{
    updateStats();
}
