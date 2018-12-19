#ifndef FILME_H
#define FILME_H
#include <QObject>

class Filme
{
private:
    QString nome;
    float mcritica;
    float mpublico;
    float mgeral;
    bool assistido;
public:
    explicit Filme();
    Filme(QString n, float mc, float mp, bool a);

    QString getNome() const;
    void setNome(const QString &value);

    float getCritica() const;
    void setCritica(float value);

    float getPublico() const;
    void setPublico(float value);

    bool getAssistido() const;
    void setAssistido(bool assist);

    float getGeral() const;

};

#endif // FILME_H
