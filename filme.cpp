#include "filme.h"

QString Filme::getGenero()
{
    return genero;
}

void Filme::setGenero(QString &value)
{
    genero = value;
}

void Filme::setNome(QString &value)
{
    nome = value;
}

QString Filme::getNome()
{
    return nome;
}

void Filme::setCritica(float value)
{
    mcritica = value;
}

float Filme::getCritica()
{
    return mcritica;
}

void Filme::setPublico(float value)
{
    mpublico = value;
}

float Filme::getPublico()
{
    return mpublico;
}

void Filme::setAssistido(bool assist)
{
    assistido = assist;
}

QString Filme::getReview()
{
    return review;
}

void Filme::setReview(QString &value)
{
    review = value;
}

bool Filme::getAssistido()
{
    return assistido;
}

float Filme::CalcularMedia()
{
    return ((getCritica()*7.0)+(getPublico()*3.0))/10.0;
}


Filme::Filme(QString n, QString g, float mc, float mp, bool a)
{
    setNome(n);
    setGenero(g);
    setCritica(mc);
    setPublico(mp);
    setAssistido(a);
}

Filme::Filme(QString n, QString g, float mc, float mp, bool a, QString r)
{
    setNome(n);
    setGenero(g);
    setCritica(mc);
    setPublico(mp);
    setAssistido(a);
    setReview(r);
}

Filme::Filme()
{

}



