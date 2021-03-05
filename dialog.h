#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Dialog *ui;

signals:
    void signal_setPass(QString pass);
};

#endif // DIALOG_H
