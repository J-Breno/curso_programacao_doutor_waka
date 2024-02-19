#include <stdio.h>

int main() {
	
	printf("Exercio 4\n");
	
	int numero;
	int primo = 0;
	int naoPrimo = 0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	for(int i = 1; i <= numero; i++) {

		if(numero % i == 0) {
			
			primo++;
			
		} else {

			naoPrimo++;
		
		}
	
	}
	
	if(primo > 2 || numero == 1) {
			
		printf("%d nao e primo", numero);
		
	} else {

		printf("%d e primo", numero);
	
	}
	
	
	return 0;
}