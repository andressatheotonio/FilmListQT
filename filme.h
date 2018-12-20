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

    QString getNome() const;
    void setNome(const QString &value);

    QString getGenero() const;
    void setGenero(const QString &value);

    float getCritica() const;
    void setCritica(float value);

    float getPublico() const;
    void setPublico(float value);

    bool getAssistido() const;
    void setAssistido(bool assist);

    QString getReview() const;
    void setReview (const QString &value);

    float CalcularMedia() const;
};

#endif // FILME_H
