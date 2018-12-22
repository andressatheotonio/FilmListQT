#ifndef CLASSIFICADOR_H
#define CLASSIFICADOR_H

#include <QObject>
#include <QVector>
#include "filme.h"

class classificador
{
private:
    QVector <Filme> lista;
    Filme f;
public:
    classificador();
    void inserirFilme (Filme f);
    void ordenarListaNota ();
    void ordenarListaNome ();
    QString melhorFilme();
    QString piorFilme();
    QString maiorGenero();
    QString menorGenero();

    void clear();
    int size();
    void erase(int index);
    Filme find(int index);

    Filme operator[](int i);
};

#endif // CLASSIFICADOR_H
