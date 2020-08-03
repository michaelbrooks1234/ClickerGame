#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <bits/stdc++.h>


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
long long int base = 1;
long long int multiplier = 1;
long long int value1 = 75;
long long int value2 = 750;
long long int value3 = 7500;
long long int value4 = 20000;
long long int value5 = 100000;
long long int value6 = 10000000;


void MainWindow::on_pushButton_pressed()
{
    QString jimmyjon = ui->label->text();
    long long int manny = jimmyjon.toInt();
    ui->pushButton->setStyleSheet("QPushButton{border-radius: 25px; border: 1px solid; background-color: #C0C0C0; font-size: 25px; height: 90%;}");
    long long int gimmy = base * multiplier;
    QString result = QVariant(manny + gimmy).toString();
    ui->label->setText(result);
}

void MainWindow::on_pushButton_released()
{
    ui->pushButton->setStyleSheet("QPushButton{border-radius: 25px; border: 1px solid; background-color: #D3D3D3; font-size: 25px; height: 90%;}");
}

void MainWindow::on_pushButton_2_pressed()
{
    ui->pushButton_2->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #C0C0C0;}");
    long long int dongy = ui->label->text().toInt();
    if(value1 <= dongy){
        dongy -= value1;
        base+=2;
        value1 *= 1.2;
        ui->pushButton_2->setText(QVariant(value1).toString());
        ui->label->setText(QVariant(dongy).toString());
    }
}

void MainWindow::on_pushButton_3_pressed()
{
    ui->pushButton_3->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #C0C0C0;}");
    long long int dongy = ui->label->text().toInt();
    if(value2 <= dongy){
        dongy -= value2;
        base+=5;
        value2 *= 1.2;
        ui->pushButton_3->setText(QVariant(value2).toString());
        ui->label->setText(QVariant(dongy).toString());
    }

}

void MainWindow::on_pushButton_4_pressed()
{
    ui->pushButton_4->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #C0C0C0;}");
    long long int dongy = ui->label->text().toInt();
    if(value3 <= dongy){
        dongy -= value3;
        base+=10;
        value3 *= 1.2;
        ui->pushButton_4->setText(QVariant(value3).toString());
        ui->label->setText(QVariant(dongy).toString());
    }

}

void MainWindow::on_pushButton_5_pressed()
{
    ui->pushButton_5->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #C0C0C0;}");
    long long int dongy = ui->label->text().toInt();
    if(value4 <= dongy){
        dongy -= value4;
        multiplier *= 1.10;
        value4 *= 1.2;
        ui->pushButton_5->setText(QVariant(value4).toString());
        ui->label->setText(QVariant(dongy).toString());
    }


}

void MainWindow::on_pushButton_6_pressed()
{
    ui->pushButton_6->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #C0C0C0;}");
    long long int dongy = ui->label->text().toInt();
    if(value5 <= dongy){
        dongy -= value5;
        multiplier *= 1.50;
        value5 *= 1.2;
        ui->pushButton_6->setText(QVariant(value5).toString());
        ui->label->setText(QVariant(dongy).toString());
    }

}

void MainWindow::on_pushButton_7_pressed()
{
    ui->pushButton_7->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #C0C0C0;}");
    long long int dongy = ui->label->text().toInt();
    if(value6 <= dongy){
        dongy -= value6;
        multiplier *= 10;
        value6 *= 1.2;
        ui->pushButton_7->setText(QVariant(value6).toString());
        ui->label->setText(QVariant(dongy).toString());
    }

}

void MainWindow::on_pushButton_2_released()
{
    ui->pushButton_2->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #D3D3D3;}");
}

void MainWindow::on_pushButton_3_released()
{
    ui->pushButton_3->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #D3D3D3;}");
}

void MainWindow::on_pushButton_4_released()
{
    ui->pushButton_4->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #D3D3D3;}");
}

void MainWindow::on_pushButton_5_released()
{
    ui->pushButton_5->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #D3D3D3;}");
}

void MainWindow::on_pushButton_6_released()
{
    ui->pushButton_6->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #D3D3D3;}");
}

void MainWindow::on_pushButton_7_released()
{
    ui->pushButton_7->setStyleSheet("QPushButton{border-radius: 5px; border: 1px solid; background-color: #D3D3D3;}");
}
