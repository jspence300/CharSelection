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


void MainWindow::on_charGen_clicked()
{
    updateName();
    updateClass();
    updateStats();
    updateGender();
    showPix();
}


void MainWindow::updateName()
{
    subNum1 = (rand() % 4);

    ui->nameDisplay->setText(cName[subNum1]);

}

void MainWindow::updateClass()
{
    subNum2 = (rand() % 4);
    classN = cClass[subNum2];
    ui->classDisplay->setText(classN);
    showPix();
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


void MainWindow::showPix()
{
    QPixmap donPix("C:/Users/zach/Desktop/projpics/trump.png");
    QPixmap hilPix("C:/Users/zach/Desktop/projpics/hill.png");
    QPixmap bernPix("C:/Users/zach/Desktop/projpics/bern.png");
    QPixmap rubiPix("C:/Users/zach/Desktop/projpics/rubi.png");

    if(classN == "Warrior")
        ui->picLabel->setPixmap(donPix);
    else if(classN == "Druid")
        ui->picLabel->setPixmap(hilPix);
    else if(classN == "Warlock")
        ui->picLabel->setPixmap(bernPix);
    else if(classN == "Paladin")
        ui->picLabel->setPixmap(rubiPix);
    else
        ui->picLabel->setText("No Picture Provided!");
}


