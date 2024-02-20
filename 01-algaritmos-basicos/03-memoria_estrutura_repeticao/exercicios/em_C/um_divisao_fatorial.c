#include <stdio.h>

int main() {
	
	printf("Exercicio 3\n\n");
	
	printf("Desenvolva o pseudocodigo e o codigo em C de um programa que recebe um valor ");
	printf("inteiro n e imprima na tela o valor da seguinte formula: \n\n");
	
	printf("1 + 1/1! + 1/2! + ... + 1/n!\n\n");

	int n;
	int num = 1;
	float soma = 1;
	float expressao = 0;
	float total = 1;
	
	printf("Digite quantos numeros voce vai querer calcular: ");
	scanf("%d", &n);
	// somatoria
	for(int i = 1; i <= n; i++) { // i de 1 até n

		soma = 1;
		// produtorio(fatorial)
	    for(int j = 1; j <= i; j++) { // j de 1 até i
			
			soma *= j;

		}
		
		total += 1 / soma;

	}

	
	printf("o total foi: %f", total);

	return 0;

}