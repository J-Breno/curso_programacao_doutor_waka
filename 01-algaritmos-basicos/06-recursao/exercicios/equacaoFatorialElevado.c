#include <stdio.h>
#include <math.h>

int equacaoFatorialElevado(int x) {
	
	if(x == 0)
		return 1;
	else 
		return pow(x, 2) * equacaoFatorialElevado(x - 1);
}

int main() {
	
	int x;
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	int fatorialElevado = equacaoFatorialElevado(x);
	printf("\n\nO valor de %d depois da equacao e: %d\n", x, fatorialElevado);

	return 0;
}