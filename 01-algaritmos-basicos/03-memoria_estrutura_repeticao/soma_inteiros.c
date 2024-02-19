#include <stdio.h>

int main() {

	int x;
	int soma = 0;
	printf("Digite um numero inteiro positivo para a soma ");
	printf("ou um numero inteiro negativo para sair: ");
	scanf("%d", &x);
	
	while(x >= 0) {
		soma += x;
		printf("Digite outro numero inteiro positivo para a soma ");
		printf("ou um numero inteiro negativo para sair: ");
		scanf("%d", &x);
	}

	printf("A soma total dos numero digitados foi: %d.\n", soma);
	
	return 0;
	
}