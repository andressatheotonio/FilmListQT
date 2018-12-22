#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QDesktopServices>
#include <QUrl>
#include <QInputDialog>

#include "arquivos.h"
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

    void on_btnwinners_clicked();

    void salvarAssistidos();

    void carregarAssistidos();

    void salvarParaAssistir();

    void carregarParaAssistir();

    void abrirReview(QString link);

    void on_btnReview_clicked();

    void on_tbAssistidos_cellDoubleClicked(int row, int column);

    void on_tbPAssistir_cellDoubleClicked(int row, int column);


    void on_btnEditarFilme_clicked();

private:
    Ui::MainWindow *ui;

    void inserirFilmeNaTabela(Filme f, int row);
    void atualizaPremios();
    classificador a, n;
};

#endif // MAINWINDOW_H
