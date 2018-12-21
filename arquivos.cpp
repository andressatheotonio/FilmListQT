#include "arquivos.h"


arquivos::arquivos()
{

}

bool arquivos::salvarLista(QString &arquivo, classificador &lista)
{
   QFile arq(arquivo);

   if(!arq.open(QIODevice::WriteOnly))
       return false;

   QTextStream out(&arq);

   for(int i = 0; i < lista.size(); i++){
       out << lista[i].getNome() << "," lista[i].getGenero() << "," << lista[i].getReview() << "," << lista[i].CalcularMedia() <<
   }
}

bool arquivos::carregarLista(QString &arquivo, classificador &lista)
{

}


