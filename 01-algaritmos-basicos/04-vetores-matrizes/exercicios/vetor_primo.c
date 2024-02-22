#include <stdio.h>

#define TAMV 10

int main() {
	
	int vetor[TAMV];
	int primo;
	int naoPrimo;
	
	
	for(int i = 0; i < TAMV; i++) {

		printf("Digite um numero do vetor para posicao %d: ", i);
		scanf("%d", &vetor[i]);	
	}
	
	for(int i = 0; i< TAMV; i ++) {
		primo = 0;
		naoPrimo = 0;
		for(int j = 0; j < vetor[i]; j++) {

		
			if(vetor[i] % (j+1) == 0 ){

				primo++;
				
			} else {
				naoPrimo++;
			}
			
		}
		
		if(primo > 2 || vetor[i] == 1) {
			printf("%d Nao e primo\n", vetor[i]);
		} else {
			printf("%d e primo\n", vetor[i]);
		}

		
	
	}
	
}