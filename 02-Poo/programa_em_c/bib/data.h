#ifndef DATA_H
#define DATA_H

#include <stdio.h>

struct s_data{
    int dia;
    int mes;
    int ano;
};

typedef struct s_data Data;

Data criaData(int dia, int mes, int ano) {

    Data data;

    data.dia = dia;
    data.mes = mes;
    data.ano = ano;

    return data;

}

void imprimeDataNaTela(Data data) {

    if( data.mes < 10 && data.dia < 10) {
        printf("0%d/0%d/%d\n", data.dia, data.mes, data.ano );
    } else if(data.mes < 10 ) {
        printf("%d/0%d/%d\n", data.dia, data.mes, data.ano );
    } else if (data.dia < 10) {
        printf("0%d/%d/%d\n", data.dia, data.mes, data.ano );
    } else {
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano );
    }


}

#endif