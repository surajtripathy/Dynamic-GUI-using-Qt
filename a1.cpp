#include "a1.h"
#include "ui_a1.h"
#include <iostream>
#include "child.h"
using namespace std;
A1::A1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::A1)
{
    ui->setupUi(this);
    filename="settingdata.txt";
    file=new QFile;
    readSettingsFromFile();
    ch=new Child();
    connect(ch,SIGNAL(signalRefresh()),this, SLOT(refreshsetting()));

}

A1::~A1()
{
    delete ui;
}

void A1::button_clicked()
{
        this->hide();
        ch->show();
}

void A1::readSettingsFromFile()
{
    gb1=new QGroupBox(this);
    gb2=new QGroupBox(this);
    gd1=new QGridLayout(gb1);
    gd2=new QGridLayout(gb2);
    gb1->setGeometry(0,50,371,501);
    gb2->setGeometry(372,50,371,501);
    gb1->setStyleSheet((QString::fromUtf8("background-color: rgb(255,255,127)")));
    gb2->setStyleSheet((QString::fromUtf8("background-color: rgb(170,255,127)")));
    configure=new QPushButton(this);
    configure->setText("Configure");
    configure->setGeometry(500,520,92,27);
    connect(configure,SIGNAL(clicked()),this,SLOT(button_clicked()));
    file->setFileName(filename);
    QTextStream settingsData(file);

    if(file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        int row=1,col=1;
        int count=0;

        
        for(int i=0;i<(MAX);i++)
        {
        settingsData >> tempName >> temppart ;
        locName<<tempName;
        partName<<temppart;

        if(temppart==1 && count!=(MAX))
        {
            b1[i]=new QPushButton(tempName,this);
            led[i]=new QLed();
            led[i]->setMinimumSize(10,10);
            led[i]->setProperty("value", QVariant(true));
            led[i]->setProperty("color", QVariant(QColor(255, 0, 0)));
            led[i]->setVisible(true);
            led[i]->setEnabled(true);
            azimuth[i]=new QPushButton("azimuth",this);
            elevation[i]=new QPushButton("elevation",this);
            gd1->addWidget(b1[i],row,col);
            gd1->addWidget(led[i],row,col+1);
            gd1->addWidget(azimuth[i],row,col+2);
            gd1->addWidget(elevation[i],row,col+3);
            col=1;
            count++;
            row++;
        }
        else if(temppart==2 && count!=(MAX))
        {
            b2[i]=new QPushButton(tempName,this);
            led[i]=new QLed();
            led[i]->setMinimumSize(10,10);
            led[i]->setProperty("value", QVariant(true));
            led[i]->setProperty("color", QVariant(QColor(255, 0, 0)));
            led[i]->setVisible(true);
            led[i]->setEnabled(true);
            azimuth[i]=new QPushButton("azimuth",this);
            elevation[i]=new QPushButton("elevation",this);
            gd2->addWidget(b2[i],row,col);
            gd2->addWidget(led[i],row,col+1);
            gd2->addWidget(azimuth[i],row,col+2);
            gd2->addWidget(elevation[i],row,col+3);
            col=1;
            row++;
            count++;
        }
    }
    }
    file->close();
}

void A1::refreshsetting()
{   delete gb1;
    delete gb2;
    delete configure;
    ch->hide();
    gb1=new QGroupBox(this);
    gb2=new QGroupBox(this);
    gd1=new QGridLayout(gb1);
    gd2=new QGridLayout(gb2);
    gb1->setGeometry(0,50,371,501);
    gb2->setGeometry(372,50,371,501);
   gb1->setStyleSheet((QString::fromUtf8("background-color: rgb(255,255,127)")));
   gb2->setStyleSheet((QString::fromUtf8("background-color: rgb(170,255,127)")));

    configure=new QPushButton("Configure",this);
    configure->setGeometry(500,520,92,27);
   // configure->setText("Configure");

    connect(configure,SIGNAL(clicked()),this,SLOT(button_clicked()));

    file->setFileName(filename);
    QTextStream settingsData(file);
    if(file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        int row=1,col=1;
        int count=0;
        for(int i=0;i<(MAX);i++)
        {
        settingsData >> tempName >> temppart ;
        locName<<tempName;
        partName<<temppart;

        if(temppart==1 && count!=(MAX))
        {
            b1[i]=new QPushButton(tempName,this);
            led[i]=new QLed();
            led[i]->setMinimumSize(10,10);
            led[i]->setProperty("value", QVariant(true));
            led[i]->setProperty("color", QVariant(QColor(255, 0, 0)));
            led[i]->setVisible(true);
            led[i]->setEnabled(true);
            azimuth[i]=new QPushButton("azimuth",this);
            elevation[i]=new QPushButton("elevation",this);
            gd1->addWidget(b1[i],row,col);
            gd1->addWidget(led[i],row,col+1);
            gd1->addWidget(azimuth[i],row,col+2);
            gd1->addWidget(elevation[i],row,col+3);
            col=1;
            count++;
            row++;
        }
        else if(temppart==2 && count!=(MAX))
        {
            b2[i]=new QPushButton(tempName,this);
            led[i]=new QLed();
            led[i]->setMinimumSize(10,10);
            led[i]->setProperty("value", QVariant(true));
            led[i]->setProperty("color", QVariant(QColor(255, 0, 0)));
            led[i]->setVisible(true);
            led[i]->setEnabled(true);
            azimuth[i]=new QPushButton("azimuth",this);
            elevation[i]=new QPushButton("elevation",this);
            gd2->addWidget(b2[i],row,col);
            gd2->addWidget(led[i],row,col+1);
            gd2->addWidget(azimuth[i],row,col+2);
            gd2->addWidget(elevation[i],row,col+3);
            col=1;
            row++;
            count++;
        }
    }
    }
    file->close();
    this->show();
}
