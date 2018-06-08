#include "child.h"
#include "ui_child.h"
#include "a1.h"


Child::Child(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Child)
{
    ui->setupUi(this);
    filename1="settingdata.txt";
    filenew=new QFile;

    int row=2,col=1;
    QString partname[MAX]={"KAMA1","KAMA2","KAMA3","XBR","DSIS","PGCS","MGCS","PCMC"};
    int y=20;

    participants=new QLabel(this);
    participants->setStyleSheet((QString::fromUtf8("background-color: rgb(240, 190, 20)")));
    participants->setText("  Participants");
    t1=new QLabel(this);
    t1->setStyleSheet((QString::fromUtf8("background-color: rgb(255,210, 190)")));
    t1->setText("   Target 1");
    t2=new QLabel(this);
    t2->setStyleSheet((QString::fromUtf8("background-color: rgb(255, 236, 100)")));
    t2->setText("   Target 2");
    QGridLayout *vbox4=new QGridLayout;
    vbox4->addWidget(participants,1,1);
    vbox4->addWidget(t1,1,2);
    vbox4->addWidget(t2,1,3);
    ui->groupBox->setLayout(vbox4);

   for( i=0;i<MAX;i++)
    {
        vbox3[i]=new QGridLayout(this);
        gb[i]=new QGroupBox(this);
        r1[i]=new QRadioButton(this);
        r2[i]=new QRadioButton(this);
        label[i]=new QLabel(this);
        label[i]->setText(partname[i]);
        vbox3[i]->addWidget(label[i],row,col);
        vbox3[i]->addWidget(r1[i],row,col+1);
        vbox3[i]->addWidget(r2[i],row,col+2);
        col=1;
        row++;
        y+=20;
        r1[i]->setCheckable(true);
        r2[i]->setCheckable(true);
        r1[i]->setChecked(false);
        r2[i]->setChecked(false);
        gb[i]->setGeometry(20,y,311,51);
        y=y+20;
        gb[i]->setLayout(vbox3[i]);
       }
   label[0]->setStyleSheet((QString::fromUtf8("background-color: rgb(170,255, 0)")));
   label[1]->setStyleSheet((QString::fromUtf8("background-color: rgb(170,255, 0)")));
   label[2]->setStyleSheet((QString::fromUtf8("background-color: rgb(170,255, 0)")));
   label[3]->setStyleSheet((QString::fromUtf8("background-color: rgb(85,255, 255)")));
   label[4]->setStyleSheet((QString::fromUtf8("background-color: rgb(170,170, 255)")));
   label[5]->setStyleSheet((QString::fromUtf8("background-color: rgb(255,255, 0)")));
   label[6]->setStyleSheet((QString::fromUtf8("background-color: rgb(170,170, 0)")));
   label[7]->setStyleSheet((QString::fromUtf8("background-color: rgb(255,170, 255)")));

    QObject::connect(r1[0],SIGNAL(clicked()),this,SLOT(button_check1()));
    QObject::connect(r1[1],SIGNAL(clicked()),this,SLOT(button_check2()));
    QObject::connect(r1[2],SIGNAL(clicked()),this,SLOT(button_check3()));
    QObject::connect(r1[3],SIGNAL(clicked()),this,SLOT(button_check4()));
    QObject::connect(r1[4],SIGNAL(clicked()),this,SLOT(button_check5()));
    QObject::connect(r1[5],SIGNAL(clicked()),this,SLOT(button_check6()));
    QObject::connect(r1[6],SIGNAL(clicked()),this,SLOT(button_check7()));
    QObject::connect(r1[7],SIGNAL(clicked()),this,SLOT(button_check8()));
    QObject::connect(r2[0],SIGNAL(clicked()),this,SLOT(button_check9()));
    QObject::connect(r2[1],SIGNAL(clicked()),this,SLOT(button_check10()));
    QObject::connect(r2[2],SIGNAL(clicked()),this,SLOT(button_check11()));
    QObject::connect(r2[3],SIGNAL(clicked()),this,SLOT(button_check12()));
    QObject::connect(r2[4],SIGNAL(clicked()),this,SLOT(button_check13()));
    QObject::connect(r2[5],SIGNAL(clicked()),this,SLOT(button_check14()));
    QObject::connect(r2[6],SIGNAL(clicked()),this,SLOT(button_check15()));
    QObject::connect(r2[7],SIGNAL(clicked()),this,SLOT(button_check16()));
}

Child::~Child()
{
    delete ui;
}

void Child::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Child::writeSettingsToFile()
{
    
filenew->setFileName(filename1);
QTextStream write(filenew);
if(filenew->open(QIODevice::WriteOnly | QIODevice::Text))
{
    write << tempname <<'\t' << tar<<'\n';
}
filenew->close();
}

void Child::writeSettingsToFile1()
{

filenew->setFileName(filename1);
QTextStream write(filenew);
if(filenew->open(QIODevice::Append | QIODevice::Text))
{
    write << tempname <<'\t' << tar<<'\n';
}
filenew->close();
}

void Child::on_pushButton_clicked()
{
d=new QFileDialog(this);
d->setAcceptMode(QFileDialog::AcceptSave);
d->setFileMode(QFileDialog::AnyFile);
filename1=d->getSaveFileName(this,"Select Simulator Settings File", ".", "Simulator Settings File (*.txt)");
temp=new QMessageBox(this);
temp->setInformativeText("Simulator Settings are Saved");
temp->setWindowTitle("Saving Simulator Settings");
temp->setStandardButtons(QMessageBox::Ok);
temp->exec();
}


void Child::button_check1()
{
    tempname="KAMA1";
    tar=1;
    writeSettingsToFile();
}

void Child::button_check2()
{
    tempname="KAMA2";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check3()
{
    tempname="KAMA3";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check4()
{
    tempname="XBR";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check5()
{
    tempname="DSIS";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check6()
{
    tempname="PGCS";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check7()
{
    tempname="MGCS";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check8()
{
    tempname="PCMC";
    tar=1;
    writeSettingsToFile1();
}

void Child::button_check9()
{
    tempname="KAMA1";
    tar=2;
    writeSettingsToFile();
}

void Child::button_check10()
{
    tempname="KAMA2";
    tar=2;
    writeSettingsToFile1();
}

void Child::button_check11()
{
    tempname="KAMA3";
    tar=2;
    writeSettingsToFile1();
}

void Child::button_check12()
{
    tempname="XBR";
    tar=2;
    writeSettingsToFile1();
}

void Child::button_check13()
{
    tempname="DSIS";
    tar=2;
    writeSettingsToFile1();
}

void Child::button_check14()
{
    tempname="PGCS";
    tar=2;
    writeSettingsToFile1();
}

void Child::button_check15()
{
    tempname="MGCS";
    tar=2;
    writeSettingsToFile1();
}

void Child::button_check16()
{
    tempname="PCMC";
    tar=2;
    writeSettingsToFile1();
}


void Child::on_pushButton_2_clicked()
{
    emit signalRefresh();
}
