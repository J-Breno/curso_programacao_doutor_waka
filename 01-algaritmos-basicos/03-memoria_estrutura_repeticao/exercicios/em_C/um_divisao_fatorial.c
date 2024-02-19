#include <stdio.h>

int main() {
	
	printf("Exercicio 3\n\n");
	
	printf("Desenvolva o pseudocodigo e o codigo em C de um programa que recebe um valor ");
	printf("inteiro n e imprima na tela o valor da seguinte formula: \n\n");
	
	printf("1 + 1/1! + 1/2! + ... + 1/n!\n\n");

	int n;
	int num = 1;
	float soma = 0;
	float expressao = 0;
	float total = 0;
	
	printf("Digite quantos numeros voce vai querer calcular: ");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--) {

		soma = i;

	    for(int j = i; j > 1; j--) {
			
			soma *= j;

		}
		
		expressao = 1 / soma;
		total += expressao;

	}

	total += num;
	
	printf("o total foi: %f", total);

	return 0;

}