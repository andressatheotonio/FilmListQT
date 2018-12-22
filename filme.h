#ifndef FILME_H
#define FILME_H
#include <QObject>

class Filme
{
private:
    QString nome;
    QString genero;
    float mcritica;
    float mpublico;
    float mgeral;
    bool assistido;
    QString review;
public:
    Filme();
    Filme(QString n, QString g, float mc, float mp, bool a);
    Filme(QString n, QString g, float mc, float mp, bool a, QString r);

    QString getNome();
    void setNome(QString &value);

    QString getGenero();
    void setGenero(QString &value);

    float getCritica();
    void setCritica(float value);

    float getPublico();
    void setPublico(float value);

    bool getAssistido();
    void setAssistido(bool assist);

    QString getReview();
    void setReview (QString &value);

    float CalcularMedia();
};

#endif // FILME_H
