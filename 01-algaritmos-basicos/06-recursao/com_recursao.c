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



int calcularFatorial(int x) {


	if(x == 0)
		return 1;
	else
		return x * calcularFatorial(x - 1);

}


int main() {
	
	int x = lerInteiroPositivo();
	
	int fatorial = calcularFatorial(x);
	
	printf("%d! = %d\n", x, fatorial);
	
	
	return 0;
}