#include <stdio.h>

int main() {
	
	printf("Exercicio 5 - Calculadora\n\n");
	
	int numeracao;
	double x;
	double y;
	double calculo = 0;
	
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Divisao\n");
	printf("4 - Multiplicacao\n");
	printf("5 - Sair\n\n");
	
	printf("Qual opcao desejada? ");
	scanf("%d", &numeracao);
	
	while(numeracao != 5) {
		
		printf("Digite o valor do primeiro numero: ");
		scanf("%lf", &x);
		printf("Digite o valor do segundo numero: ");
		scanf("%lf", &y);
	
		if(numeracao == 1) {
			calculo =  x + y;
			printf("\nA soma de %lf + %lf = %lf\n\n", x, y, calculo);
		}
		else if(numeracao == 2) {
			calculo = x - y;
			printf("\nA subtracao de %lf - %lf = %lf\n\n", x, y, calculo);
		}
		else if(numeracao == 3) {
			calculo = x / y;
			printf("\nA divisao de %lf / %lf = %lf\n\n", x, y, calculo);
		}
		else if(numeracao == 4) {
			calculo = x * y;
			printf("\nA multiplicacao de %lf * %lf = %lf\n\n", x, y, calculo);
		}
		else
			printf("\nDigite um numero de 1 ate 5\n\n");
			
		
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Divisao\n");
		printf("4 - Multiplicacao\n");
		printf("5 - Sair\n\n");
		
		printf("Qual opcao desejada? ");
		scanf("%d", &numeracao);
		
	}
	
	printf("Obrigado por participar!");
	
	return 0;
}