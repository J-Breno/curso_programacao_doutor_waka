#include <stdio.h>

#define TAM 5

int main() {
	
	int vetor[TAM];
	int vetorB[TAM];
	
	printf("Digite os valores do vetor: \n");
	
	for(int i = 0; i < TAM; i++ ) {
		scanf("%d", &vetor[i]);
		vetorB[i] = vetor[i] * 2;
		
	}
	printf("O dobro do array: \n");
	
	for(int i = 0; i < TAM; i++ ) {
		printf("%d\n", vetorB[i]);
		
	}

	return 0;
}