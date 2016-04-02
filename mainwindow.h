#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

     QString gender[2] = {"Male", "Female"};
     QString cClass[4] = {"Warrior", "Warlock", "Druid", "Paladin"};
     QString cName[4] = {"WarrenBuffet", "LocknessMonster", "WillFeral", "Lawladin"};



    QString name;
    QString classN;
    QString genD;


    int subNum1 = 0;
    int subNum2 = 0;
    int subNum3 = 0;
    int stamina;
    int strength;
    int intellect;
    int agility;
    int spirit = 0;

    void updateName();
    void updateClass();
    void updateGender();
    void updateStats();
    void showPix();

private slots:


    void on_charGen_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
