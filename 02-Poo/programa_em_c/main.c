#include <stdio.h>

#include "bib/data.h"
#include "bib/leitura-da-tela.h"

int main(){

    int dia = leIntDaTela("Informe o dia da data: ");
    int mes = leIntDaTela("Informe o mes da data: ");
    int ano = leIntDaTela("Informe o ano da data: ");

    Data data = criaData(dia, mes, ano);

    imprimeDataNaTela(data);

    return 0;

}