#include "filme.h"

QString Filme::getGenero() const
{
    return genero;
}

void Filme::setGenero(const QString &value)
{
    genero = value;
}

void Filme::setNome(const QString &value)
{
    nome = value;
}

QString Filme::getNome() const
{
    return nome;
}

void Filme::setCritica(float value)
{
    mcritica = value;
}

float Filme::getCritica() const
{
    return mcritica;
}

void Filme::setPublico(float value)
{
    mpublico = value;
}

float Filme::getPublico() const
{
    return mpublico;
}

void Filme::setAssistido(bool assist)
{
    assistido = assist;
}

QString Filme::getReview() const
{
    return review;
}

void Filme::setReview(const QString &value)
{
    review = value;
}

bool Filme::getAssistido() const
{
    return assistido;
}

float Filme::CalcularMedia() const
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



