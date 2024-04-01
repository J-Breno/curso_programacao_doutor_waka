#ifndef LEITURA_DA_TELA_H
#define LEITURA_DA_TELA_H

#include <stdio.h>

int leIntDaTela(char* srt) {
    int var;

    printf("%s", srt);
    
    scanf("%d", &var);

    return var;
}

#endif