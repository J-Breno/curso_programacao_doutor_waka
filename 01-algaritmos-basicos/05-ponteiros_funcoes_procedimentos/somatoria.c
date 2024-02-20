#include <stdio.h>

int main() {
	
	int n; 
	
	printf("Informe o valor de n: ");
	scanf("%d", &n);
	printf("\n");
	
	float soma = 1;
	
	for(int i = 1; i <= n; i++) { // i de 1 até n
	
		float fatorial = 1;
		
		for(int j = 1; j <= i; i++) { // j de 1 até i
			fatorial *= j;
			
		}
		
		soma += ( 1 / fatorial );
		
	}
	
	printf("O resultado da somantoria 1 + 1/1! + ");
	printf(" 1/2! + ... + 1/%d! e: %f\n", n, soma);
	
	return 0;
}