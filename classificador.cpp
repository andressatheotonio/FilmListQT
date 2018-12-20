#include "classificador.h"
#include <algorithm>

bool comp(Filme a, Filme b){

    return a.CalcularMedia() > b.CalcularMedia();
}

bool cimp(Filme a, Filme b){
    return a.getNome() < b.getNome();
}
classificador::classificador()
{

}

void classificador::inserirFilme(Filme f)
{
    lista.push_back(f);
}

void classificador::ordenarListaNota()
{
    std::stable_sort(lista.begin(), lista.end(), comp);
}

void classificador::ordenarListaNome()
{
    std::stable_sort(lista.begin(), lista.end(), cimp);
}

void classificador::clear()
{
    lista.clear();
}

int classificador::size()
{
    return lista.size();
}

Filme classificador::operator[](int i)
{
    return lista[i];
}






