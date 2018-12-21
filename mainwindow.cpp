#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

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
    int qrow = 0;
    bool stats = true;

    if(ui->leName->text().size() != 0 and ui->leCritica->text().size() != 0 and ui->lePublico->text().size() != 0 and ui->cbGenero->currentText() != "Selecione um gênero" and ui->cbStatus->currentText() != "Selecione um status"){
        if(ui->leReview->text().size()==0){
            QString nome = ui->leName->text();
            QString genero = ui->cbGenero->currentText();
            float medpub = (ui->lePublico->text()).toFloat();
            float medcri = (ui->leCritica->text()).toFloat();
            if(ui->cbStatus->currentText() == "Não Assistido")
                stats = false;

            Filme f(nome,genero,medpub,medcri,stats);

            if(stats == true){
                a.inserirFilme(f);
                qrow = ui->tbAssistidos->rowCount();
                ui->tbAssistidos->insertRow(qrow);
                inserirFilmeNaTabela(f,qrow);

            } else{
                n.inserirFilme(f);
                qrow = ui->tbPAssistir->rowCount();
                ui->tbPAssistir->insertRow(qrow);
                inserirFilmeNaTabela(f,qrow);
            }

        } else{
            QString nome = ui->leName->text();
            QString genero = ui->cbGenero->currentText();
            float medpub = (ui->lePublico->text()).toFloat();
            float medcri = (ui->leCritica->text()).toFloat();
            if(ui->cbStatus->currentText() == "Não Assistido")
                stats = false;
            QString rev = ui->leReview->text();

            Filme f(nome,genero,medpub,medcri,stats,rev);

            if(stats == true){
                a.inserirFilme(f);
                qrow = ui->tbAssistidos->rowCount();
                ui->tbAssistidos->insertRow(qrow);
                inserirFilmeNaTabela(f,qrow);

            } else{
                n.inserirFilme(f);
                qrow = ui->tbPAssistir->rowCount();
                ui->tbPAssistir->insertRow(qrow);
                inserirFilmeNaTabela(f,qrow);
            }

            }
        }


    ui->leName->clear();
    ui->leReview->clear();
    ui->leCritica->clear();
    ui->lePublico->clear();
    ui->cbGenero->setCurrentText("Selecione um gênero");
    ui->cbStatus->setCurrentText("Selecione um status");

}

void MainWindow::inserirFilmeNaTabela(Filme f, int row)
{
    if(f.getAssistido() == true){
        ui->tbAssistidos->setItem(row,0, new QTableWidgetItem(QString::number(f.CalcularMedia())));
        ui->tbAssistidos->setItem(row, 1, new QTableWidgetItem("link"));
        ui->tbAssistidos->setItem(row,2, new QTableWidgetItem(f.getNome()));
    } else{
        ui->tbPAssistir->setItem(row,0, new QTableWidgetItem(QString::number(f.CalcularMedia())));
        ui->tbPAssistir->setItem(row, 1, new QTableWidgetItem("link"));
        ui->tbPAssistir->setItem(row,2, new QTableWidgetItem(f.getNome()));
    }
}

void MainWindow::atualizaPremios()
{
    ui->melhorfilmet->setText(a.melhorFilme());
    ui->melhorfilmef->setText(n.melhorFilme());

    ui->piorfilmet->setText(a.piorFilme());
    ui->piorfilmef->setText(n.piorFilme());

    ui->genmaist->setText(a.maiorGenero());
    ui->genmaisf->setText(n.maiorGenero());

    ui->genmenost->setText(a.menorGenero());
    ui->genmenosf->setText(n.menorGenero());
}

void MainWindow::on_btnOrdemNome_clicked()
{
    ui->tbAssistidos->clearContents();
    ui->tbPAssistir->clearContents();

    a.ordenarListaNome();
    n.ordenarListaNome();
    for(int i = 0; i < a.size(); i++){
        inserirFilmeNaTabela(a[i],i);
    }

    for(int i = 0; i < n.size(); i++){
        inserirFilmeNaTabela(n[i],i);
    }
}



void MainWindow::on_btnOrdemNota_clicked()
{
    ui->tbAssistidos->clearContents();
    ui->tbPAssistir->clearContents();

    a.ordenarListaNota();
    n.ordenarListaNota();
    for (int i=0; i<a.size(); i++)
    for(int i = 0; i < a.size(); i++){
        inserirFilmeNaTabela(a[i],i);
    }

    for(int i = 0; i < n.size(); i++){
        inserirFilmeNaTabela(n[i],i);
    }
}

void MainWindow::on_btnwinners_clicked()
{
    atualizaPremios();
}
