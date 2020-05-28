#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include"paymoney.h"
#include<QLineEdit>
#include<QIcon>
#include<QPainter>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    ui->radioButton_3->setChecked(true);
    ui->radioButton_5->setChecked(true);
}
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/picture/air.jpeg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    QString danjia= ui->lineEdit_3->text();
    int Danjia=danjia.toInt();
    QString mianji=ui->lineEdit_4->text();
    int Mianji=mianji.toInt();
    QString lilv=ui->lineEdit_9->text();
    double Lilv=lilv.toDouble();
    double money;
    int period;
    switch(ui->comboBox_3->currentIndex())
    {
    case 0:money=Danjia*Mianji*0.8;break;
    case 1:money=Danjia*Mianji*0.75;break;
    case 2:money=Danjia*Mianji*0.7;break;
    case 3:money=Danjia*Mianji*0.65;break;
    case 4:money=Danjia*Mianji*0.6;break;
    case 5:money=Danjia*Mianji*0.55;break;
    case 6:money=Danjia*Mianji*0.5;break;
    case 7:money=Danjia*Mianji*0.45;break;
    case 8:money=Danjia*Mianji*0.4;break;
    case 9:money=Danjia*Mianji*0.35;break;
    case 10:money=Danjia*Mianji*0.3;break;
    case 11:money=Danjia*Mianji*0.25;break;
    case 12:money=Danjia*Mianji*0.2;break;
    }
    switch(ui->comboBox_4->currentIndex())
    {
    case 0:period=25;break;
    case 1:period=24;break;
    case 2:period=23;break;
    case 3:period=22;break;
    case 4:period=21;break;
    case 5:period=20;break;
    case 6:period=19;break;
    case 7:period=18;break;
    case 8:period=17;break;
    case 9:period=16;break;
    case 10:period=15;break;
    case 11:period=14;break;
    case 12:period=13;break;
    case 13:period=12;break;
    case 14:period=11;break;
    case 15:period=10;break;
    case 16:period=9;break;
    case 17:period=8;break;
    case 18:period=7;break;
    case 19:period=6;break;
    case 20:period=5;break;
    case 21:period=4;break;
    case 22:period=3;break;
    case 23:period=2;break;
    case 24:period=1;break;
    }
    int type;
    if(ui->radioButton->isChecked())
    {
        type=1;
    }
    else
    {
        type=2;
    }
    paymoney x;
    x.Paymoney(money,period,Lilv,type);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString shangdai=ui->lineEdit->text();
    double Shangdai=shangdai.toDouble();
    QString shanglilv=ui->lineEdit_2->text();
    double Shanglilv=shanglilv.toDouble();
    QString gong=ui->lineEdit_5->text();
    double Gong=gong.toDouble();
    QString gonglilv=ui->lineEdit_6->text();
    double Gonglilv=gonglilv.toDouble();
    double money;
    int period;
    switch(ui->comboBox_6->currentIndex())
    {
    case 0:period=25;break;
    case 1:period=24;break;
    case 2:period=23;break;
    case 3:period=22;break;
    case 4:period=21;break;
    case 5:period=20;break;
    case 6:period=19;break;
    case 7:period=18;break;
    case 8:period=17;break;
    case 9:period=16;break;
    case 10:period=15;break;
    case 11:period=14;break;
    case 12:period=13;break;
    case 13:period=12;break;
    case 14:period=11;break;
    case 15:period=10;break;
    case 16:period=9;break;
    case 17:period=8;break;
    case 18:period=7;break;
    case 19:period=6;break;
    case 20:period=5;break;
    case 21:period=4;break;
    case 22:period=3;break;
    case 23:period=2;break;
    case 24:period=1;break;
    }
    money=Shangdai+Gong;
    int type;
    if(ui->radioButton_3->isChecked())
    {
        type=1;
    }
    else
    {
        type=2;
    }
    paymoney y;
    y.combined(Shangdai,Shanglilv,Gong,Gonglilv,period,type);
}


void MainWindow::on_pushButton_5_clicked()
{
    QString zongdaikuan=ui->lineEdit_8->text();
    double Zongdaikuan=zongdaikuan.toDouble();
    QString lilv=ui->lineEdit_7->text();
    double Lilv=lilv.toDouble();
    double money;
    int period;
    switch(ui->comboBox_9->currentIndex())
    {
    case 0:period=25;break;
    case 1:period=24;break;
    case 2:period=23;break;
    case 3:period=22;break;
    case 4:period=21;break;
    case 5:period=20;break;
    case 6:period=19;break;
    case 7:period=18;break;
    case 8:period=17;break;
    case 9:period=16;break;
    case 10:period=15;break;
    case 11:period=14;break;
    case 12:period=13;break;
    case 13:period=12;break;
    case 14:period=11;break;
    case 15:period=10;break;
    case 16:period=9;break;
    case 17:period=8;break;
    case 18:period=7;break;
    case 19:period=6;break;
    case 20:period=5;break;
    case 21:period=4;break;
    case 22:period=3;break;
    case 23:period=2;break;
    case 24:period=1;break;
    }
    money=Zongdaikuan;
    int type;
    if(ui->radioButton_5->isChecked())
    {
        type=1;
    }
    else
    {
        type=2;
    }
    paymoney z;
    z.Paymoney(money,period,Lilv,type);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_9->clear();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    switch (index) {
    case 0:ui->StackedWidget->setCurrentIndex(0);break;
    case 1:ui->StackedWidget->setCurrentIndex(0);break;
    case 2:ui->StackedWidget->setCurrentIndex(1);break;
    }
}

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    switch (index) {
    case 0:ui->StackedWidget->setCurrentIndex(0);
    case 1:ui->StackedWidget->setCurrentIndex(2);
    }
}


void MainWindow::on_comboBox_5_currentIndexChanged(int index)
{
    switch (index) {
    case 0:ui->StackedWidget->setCurrentIndex(1);break;
    case 1:ui->StackedWidget->setCurrentIndex(0);break;
    case 2:ui->StackedWidget->setCurrentIndex(0);break;
    }
}

void MainWindow::on_comboBox_7_currentIndexChanged(int index)
{
    switch (index) {
    case 0:ui->StackedWidget->setCurrentIndex(2);break;
    case 1:ui->StackedWidget->setCurrentIndex(2);break;
    case 2:ui->StackedWidget->setCurrentIndex(1);break;
    }
}

void MainWindow::on_comboBox_8_currentIndexChanged(int index)
{
    switch (index) {
    case 0:ui->StackedWidget->setCurrentIndex(2);
    case 1:ui->StackedWidget->setCurrentIndex(0);
    }
}
