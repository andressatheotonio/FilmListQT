#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnInserir_clicked()
{
    if(ui->leName->text().size() != 0 and ui->leCritica->text().size() != 0 and ui->lePublico->text().size() != 0 and ui->chbAssistido->)
}
