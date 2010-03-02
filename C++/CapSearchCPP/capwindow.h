#ifndef CAPWINDOW_H
#define CAPWINDOW_H

#include <QDialog>

namespace Ui {
    class CapWindow;
}

class CapWindow : public QDialog {
    Q_OBJECT
public:
    CapWindow(QWidget *parent = 0);
    ~CapWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CapWindow *ui;

private slots:
    void on_buttonExit_clicked();
    void on_buttonCerca_clicked();
    void createTrayIcon();
    QString cercaCap(QString comune, QString localita, QString provincia);
};

#endif // CAPWINDOW_H
