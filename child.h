#ifndef CHILD_H
#define CHILD_H
#define MAX 8
#include <QWidget>
#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QRadioButton>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
    class Child;
}

class Child : public QWidget {
    Q_OBJECT
public:
    QFile *filenew;
    QString filename1;
    QString tempname;
    QLabel *label[MAX];
    QLabel *participants;
    QLabel *t1;
    QLabel *t2;
    QGroupBox *gb[MAX];
    QGridLayout *vbox3[MAX];
    QFileDialog *d;
     int i;
     QMessageBox *temp;
    QRadioButton *r1[MAX];
    QRadioButton *r2[MAX];
    int tar;
    Child(QWidget *parent = 0);
    ~Child();

protected:
    void changeEvent(QEvent *e);
signals:
    void signalRefresh();
private:
    Ui::Child *ui;
    void writeSettingsToFile();
    void writeSettingsToFile1();
    void button();

public slots:
    void on_pushButton_clicked();
    void button_check1();
    void button_check2();
    void button_check3();
    void button_check4();
    void button_check5();
    void button_check6();
    void button_check7();
    void button_check8();
    void button_check9();
    void button_check10();
    void button_check11();
    void button_check12();
    void button_check13();
    void button_check14();
    void button_check15();
    void button_check16();

private slots:
    void on_pushButton_2_clicked();
};

#endif // CHILD_H
