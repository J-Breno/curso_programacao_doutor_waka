#include <stdio.h>

int main() {
	
	int n;
	int soma = 0;
	
	printf("Por favor, digite um numero: ");
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i = i + 2) {
		
		soma+= i;
			
	}

	
	printf("A soma dos numeros pares de 0 ate %d e: %d", n, soma);
	
	return 0;

}