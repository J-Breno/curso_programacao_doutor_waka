#include <stdio.h>

int lerInteiroPositivo() {

	int n;
	
	printf("Informe um numero postivo: ");
	scanf("%d", &n);
	
	while( n < 0 ) {
	
		printf("O valor informado não é um inteiro positivo.\n");
		printf("Informe um inteiro positivo: ");
		scanf("%d", n);
		
		
	}
	
	return n;
}

int calcularFatorial(int n) {
		int fatorial = 1;
	
	for( int i = n;i >= 0; i--) {
		
		if(i > 0 ) {	
			fatorial *= i;
		} else {
			fatorial *=1;
		}
		
	}
	return fatorial;

	
}

int main() {
	
	int x = lerInteiroPositivo();
	
	
	int fatorial = calcularFatorial(x);
	
	printf("%d! = %d\n", x, fatorial);
	
	return 0;
}