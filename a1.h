#ifndef A1_H
#define A1_H

#include <QMainWindow>
#include <QFile>
#include <QGridLayout>
#include <QPushButton>
#include <QTextStream>
#include <QPushButton>
#include <QList>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include "child.h"
#include <qled.h>
namespace Ui {
class A1;
class QFile;
}

class A1 : public QMainWindow
{
    Q_OBJECT

public:
    Child *ch;
    QFile *file;
    QString filename;
    QString tempName;
    QString tempNameFinal;
    QString tempNameFinal2;
    int temppart;
    QLabel *target1;
    QLabel *target2;
    QGroupBox *gb1;
    QGroupBox *gb2;
    QGridLayout *gd1;
    QGridLayout *gd2;
    QPushButton *b1[MAX];
    QPushButton *b2[MAX];
    QPushButton *azimuth[MAX];
    QPushButton *elevation[MAX];
    QPushButton *configure;
    QList<QString>	locName;
    QList<short int>	partName;
    QLed *led[10]; 
    explicit A1(QWidget *parent = 0);
    ~A1();

public slots:
    void button_clicked();
    void readSettingsFromFile();
    void refreshsetting();

private:
    Ui::A1 *ui;
    Child child;
};

#endif // A1_H
