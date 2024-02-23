#include <stdio.h>

#define TAM 3

int main() {
	
	int determinante[TAM][TAM], soma = 0;
	int total, dS, dP;
	
	printf("Digite os valores: \n");
	
	for(int i = 0; i < TAM; i++ ){
		
		for(int j = 0; j < TAM; j++){ 
			scanf("%d", &determinante[i][j]);
		}
		
	}
	
	int determinanteB[3][2];
	
	for(int i = 0; i < TAM; i++ ){
		
		for(int j = 0; j < 2; j++){ 
			if(j < 2) {
				determinanteB[i][j] = determinante[i][j];
				
			}
		}
		
	}
	printf("\n\n");

	int determinanteC[3][5];
	
	for(int i = 0; i < TAM; i++ ){
		
		for(int j = 0; j < 5; j++){ 
			if(j < 3) {
				
				determinanteC[i][j] = determinante[i][j];
			}
			if(j > 2) {

				determinanteC[i][j] = determinante[i][j-3];
				
			}
		}
	}
	
	for(int i = 0; i < TAM; i++ ){
		
		for(int j = 0; j < 5; j++){ 
			printf("%d     ", determinanteC[i][j]);
		}
		printf("\n");
	}
	
	int var1 = 1;
	int var2 = 1;
	int var3 = 1;
	
	for(int i = 0; i < TAM; i++ ) {
			
		var1 *= determinanteC[i][i];
		var2 *= determinanteC[i][i+1];
		var3 *= determinanteC[i][i+2];
	}
	
	dP = var1 + var2 + var3;
	
	
	var1 = 1;
	var2 = 1;
	var3 = 1;
	int count = 4;
	for(int i = 0; i < TAM; i++ ) {
		
		var1 *= determinanteC[i][count];
		var2 *= determinanteC[i][count-1];
		var3 *= determinanteC[i][count-2];
		count--;
	}
	
	dS = var1 + var2 + var3;
	printf("%d\n", dP);
	printf("%d\n", dS);
	total = dP - (dS);
	printf("\n");
	
	printf("O determinante da Matriz3x3 e: %d\n", total);
	return 0;
}