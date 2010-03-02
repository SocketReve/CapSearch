#include "capwindow.h"
#include "ui_capwindow.h"
#include <QtSql>
#include <QtDebug>
#include <QSystemTrayIcon>


#define DRIVER       "QSQLITE"
#define DATABASE     "databaseCap.db"


CapWindow::CapWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CapWindow)
{
    ui->setupUi(this);
}

CapWindow::~CapWindow()
{
    delete ui;
}

void CapWindow::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CapWindow::on_buttonCerca_clicked()
{
    ui->lineCap->setText(CapWindow::cercaCap(ui->lineComune->text(),ui->lineLocal->text(),ui->lineProv->text()));
}

void CapWindow::on_buttonExit_clicked()
{
    exit(0);
}


QString CapWindow::cercaCap(QString comune, QString localita, QString provincia)
{
    QSqlDatabase db = QSqlDatabase::addDatabase( DRIVER );
    QSqlQuery query;


    db.setDatabaseName( DATABASE );

    if( !db.open() )
    {
        return "Errore";
        qDebug() << QString("Errore");
    }
    if (localita == "")
        query = db.exec("SELECT capi_cap FROM tab_cap WHERE prov_cap = '"+provincia.toUpper()+"' AND comu_cap = '"+comune.toUpper()+"'");
    else
        query = db.exec("SELECT capi_cap FROM tab_cap WHERE prov_cap = '"+provincia.toUpper()+"' AND comu_cap = '"+comune.toUpper()+"' AND fraz_cap = '"+localita.toUpper()+"' OR topo_cap = '"+localita.toUpper()+"'");

    query.next();
    QString cap = query.value(0).toString();
    if (cap == NULL)
        return "Errore";
    else
        return cap;

}

void CapWindow::createTrayIcon()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(minimizeAction);
    trayIconMenu->addAction(maximizeAction);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
}
