#include <stdio.h>

int calcularEquacaoRecursiva(int x) {
	
	if(x == 0) {
		return 1;
	} else {
		return x * calcularEquacaoRecursiva(x - 1);
	}
	
}

int main() {
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	int equacao = calcularEquacaoRecursiva(x);
	
	printf("\n\nO valor do equacao de %d e: %d\n", x, equacao);
	return 0;
}