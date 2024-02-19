#include <stdio.h>

int main() {

	int n;
	int soma = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for( int x = 0; x <= n; x++ ) { // só lembrando o incremento é feito somente depois de terminar a primeira condição
		printf("somando %d + %d.\n", x, soma);
		soma += x;
	}
	printf("A soma de 0 ate %d e: %d", n, soma);

   return 0;	
	
}