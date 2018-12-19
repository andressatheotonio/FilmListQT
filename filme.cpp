#include "filme.h"

Filme::Filme()
{

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

bool Filme::getAssistido() const
{
    return assistido;
}

float Filme::getGeral() const
{
    return ((getCritica()*7)+(getPublico()*3))/10.0;
}


Filme::Filme(QString n, float mc, float mp, bool a)
{
    setNome(n);
    setCritica(mc);
    setPublico(mp);
    setAssistido(a);
}

