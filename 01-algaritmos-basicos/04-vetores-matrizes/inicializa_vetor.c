#include <stdio.h>

#define TAMANHO_VETOR 5

int main() {

	float vetor[TAMANHO_VETOR];
	float soma = 0;
	
	/*int vetor[TAMANHO_VETOR] = {100, 50, 50, 120, 30};*/
	
	// end - i * tamanho(tipo) + endereço de inicialização = 3(indice) * 4(bits) + 0x12
	//    = 12 + 0x12 = 0x24 // esse seria o valor de inicializacao do endereço desse indece
	
	vetor[0] = 100;
	vetor[1] = 50;
	vetor[2] = 50;
	vetor[3] = 120;
	vetor[4] = 30;
	
	
	for(int i = 0; i < TAMANHO_VETOR; i++) {
			
		soma += vetor[i];
	}
	printf("A soma dos salarios sao: %f", soma);


	return 0;
}