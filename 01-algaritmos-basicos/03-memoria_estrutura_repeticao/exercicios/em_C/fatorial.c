#include <stdio.h>

int main() {
	
	printf("Exercicio 2\n\n");
	
	printf("Desenvolva o codigo em C de um programa que recebe uma variavel inteira n e ");
	printf("imprime na tela o valor de n!\n\n");

	int n;
	int soma = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);	
	soma = n;
	
	for(int i = n; i > 1; i--) {

		
		soma *= i;
		
	}

	printf("O fatorial de %d: %d", n, soma);
	
	return 0;
}