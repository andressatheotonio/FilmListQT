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

QString classificador::melhorFilme()
{
    ordenarListaNota();
    return lista[0].getNome();
}

QString classificador::piorFilme()
{
    ordenarListaNota();
    return lista[lista.size()-1].getNome();
}

QString classificador::maiorGenero()
{
    int generos[10] = {};

    //Drama, index 0; Ação, index 1, Comédia, index 2; Terror, index 3; Ficção, index 4;

    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getGenero() == "Drama")
            generos[0]++;
        else if(lista[i].getGenero() == "Ação/Aventura")
            generos[1]++;
        else if(lista[i].getGenero() == "Comédia")
            generos[2]++;
        else if(lista[i].getGenero() == "Terror")
            generos[3]++;
        else
            generos[4]++;
    }
    int maxi = INT_MIN, imaxi = 0;

    for(int i = 0; i < 5; i++){
        if(generos[i] > maxi){
            maxi = generos[i];
            imaxi = i;
        }
    }

    switch (imaxi) {
    case 0:
        return "Drama";
    case 1:
        return "Ação/Aventura";
    case 2:
        return "Comédia";
    case 3:
        return "Terror";
    case 4:
        return "Ficção";
    }
}

QString classificador::menorGenero()
{
    int generos[5] = {};

    //Drama, index 0; Ação, index 1, Comédia, index 2; Terror, index 3; Ficção, index 4;

    for(int i = 0; i < lista.size(); i++){

        if(lista[i].getGenero() == "Drama")
            generos[0]++;
        else if(lista[i].getGenero() == "Ação/Aventura")
            generos[1]++;
        else if(lista[i].getGenero() == "Comédia")
            generos[2]++;
        else if(lista[i].getGenero() == "Terror")
            generos[3]++;
        else
            generos[4]++;
    }
    int mini = INT_MAX, imini = 0;

    for(int i = 0; i < 5; i++){
        if(generos[i] < mini){
            mini = generos[i];
            imini = i;
        }
    }

    switch (imini) {
    case 0:
        return "Drama";
    case 1:
        return "Ação/Aventura";
    case 2:
        return "Comédia";
    case 3:
        return "Terror";
    case 4:
        return "Ficção";
    }
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






