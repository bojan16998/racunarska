#ifndef DIALOG_H
#define DIALOG_H
#include <lcd.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>

#include <QThread>
#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void onRadioButtonClicked(bool checked);

    void on_pushButton_clicked();

    void on_resetButton_clicked();

    //void printMessage(int number);



   // void displayNextNumber();



private:
    //QTimer* numberDisplay;
    Ui::Dialog *ui;
};
#endif // DIALOG_H
