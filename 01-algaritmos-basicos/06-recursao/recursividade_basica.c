#include <stdio.h> 
#include <stdlib.h>

// um processo recursivo seja ela uma função ou um procedimento é uma funcao/procedimento que chama a si mesmo

void imprimir(int x) {

	if(x == 0) {
		printf("%d ", x);
	} else {
		imprimir(x - 1); // ele esta guardando o valor da variável dentro de uma pilha, ai depois ele volta de traz para frente quando termina a recursividade, no caso termina quando x é 0
		printf("%d ", x);
	}
	
}

int main() {
	
	int x;
	
	printf("Digite um valor menor que zero: ");
	scanf("%d", &x);
	imprimir(x);

	return 0;
}