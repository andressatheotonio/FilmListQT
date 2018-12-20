#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "filme.h"
#include "classificador.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnInserir_clicked();

    void on_btnOrdemNome_clicked();

    void on_btnOrdemNota_clicked();

private:
    Ui::MainWindow *ui;

    void inserirFilmeNaTabela(Filme f, int row);
    classificador a, n;
};

#endif // MAINWINDOW_H
