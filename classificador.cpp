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

    //Drama, index 1; Ação, index 2, Comédia, index 3; Terror, index 4; Ficção, index 5;

    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getGenero() == "Drama")
            generos[1]++;
        else if(lista[i].getGenero() == "Ação/Aventura")
            generos[2]++;
        else if(lista[i].getGenero() == "Comédia")
            generos[3]++;
        else if(lista[i].getGenero() == "Terror")
            generos[4]++;
        else
            generos[5]++;
    }

    int maxi = INT_MIN, imaxi = 0;

    for(int i = 1; i <= 5; i++){
        if(generos[i] > maxi and generos[i] != 0){
            maxi = generos[i];
            imaxi = i;
        }
    }

    switch (imaxi) {
    case 1:
        return "Drama";
    case 2:
        return "Ação/Aventura";
    case 3:
        return "Comédia";
    case 4:
        return "Terror";
    case 5:
        return "Ficção";
    case 0:
        return "-";
    }
}

QString classificador::menorGenero()
{
    int generos[10] = {};

    //Drama, index 1; Ação, index 2, Comédia, index 3; Terror, index 4; Ficção, index 5;

    for(int i = 0; i < lista.size(); i++){

        if(lista[i].getGenero() == "Drama")
            generos[1]++;
        else if(lista[i].getGenero() == "Ação/Aventura")
            generos[2]++;
        else if(lista[i].getGenero() == "Comédia")
            generos[3]++;
        else if(lista[i].getGenero() == "Terror")
            generos[4]++;
        else
            generos[5]++;
    }
    int mini = INT_MAX, imini = 0;

    for(int i = 1; i <= 5; i++){
        if(generos[i] < mini and generos[i] != 0){
            mini = generos[i];
            imini = i;
        }
    }

    switch (imini) {
    case 1:
        return "Drama";
    case 2:
        return "Ação/Aventura";
    case 3:
        return "Comédia";
    case 4:
        return "Terror";
    case 5:
        return "Ficção";
    case 0:
        return "-";
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

void classificador::erase(int index)
{
    lista.erase(lista.begin()+index);
}

Filme classificador::find(int index)
{
    return lista[index];
}


Filme classificador::operator[](int i)
{
    return lista[i];
}






