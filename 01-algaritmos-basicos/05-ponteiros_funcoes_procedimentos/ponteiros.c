#include <stdio.h>

int main() {

	int n = 10;
	int *var; // não pode ser inicializada
	
	var = &n; // o var vai receber o endereço de n;, no caso na variavel var, está sendo escrito
	// o valor do endereço de n nela, vamos supor que o endereço seja 0x04
	
	*var += 10; // esse * antes da variável significa ponteiro // *0x04 += 10, esse ponteiro(*)
	// diz assim: vá na memória na posição, tipo vá na memória na posição 0x04 e nessa posição 
	// atribua o que está lá mais 10, nesse momento o n também começa a valer o que está lá mais 10
	
	printf("O valor em n e: %d\n", n); // devolve o valor de n
	printf("O valor em var e: %d\n", var);
	printf("O valor em *var e: ", *var); // ponteiros são apenas variáveis que armazena memória

	return 0;
}