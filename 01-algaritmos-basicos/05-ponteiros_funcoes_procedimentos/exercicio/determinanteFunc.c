#include <stdio.h>

#define L 2
#define C 2

int funcMatriz(int matriz[][C]) {
	
	
	int determinante = 0, elementos;
	
	printf("Digite os elementos da matriz: \n");

	
	for(int i = 0; i< 2; i++) {
		for(int j = 0; j < 2; j++ ) {
			scanf("%d", &matriz[i][j]);			
		}
	}
	
	determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
	printf("valor da determinante = %d", determinante);
	
	return determinante;
	
}


int main() {

	int matriz[L][C];
	
	funcMatriz(matriz);

	return 0;
}