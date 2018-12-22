#ifndef ARQUIVOS_H
#define ARQUIVOS_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QDebug>

#include "filme.h"
#include "classificador.h"

class arquivos
{
public:
    arquivos();
    classificador a, n;
    static bool salvarLista(QString &arquivo, classificador &lista);
    static bool carregarLista(QString &arquivo, classificador &lista);

};

#endif // ARQUIVOS_H
