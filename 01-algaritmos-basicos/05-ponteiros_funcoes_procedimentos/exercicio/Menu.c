#include <stdio.h>

#define TAM 10
int res[TAM]; 

void menu() {
	int x = 0, iniciado = 0;
	void sumFuncPrimos();
	int funcVetor();
	void sumPares();
	printf("-------- MENU --------\n\n");
	
	printf("Informe o vetor - 1\n");
	printf("Somatoria dos primos - 2\n");
	printf("Somatoria dos pares - 3\n");
	printf("Sair - 4\n\n");
	printf("Qual a opcao desejada? ");
	scanf("%d", &x);
	
	while(x != 4) {
		
		if(x == 1) {
			funcVetor();
		} else if(x == 2) {
			sumFuncPrimos();
		} else if(x == 3) {
			sumPares();
		}
		else {
			printf("Porfavor digita um numero de 1 ate 4\n");
		}
		
		printf("-------- MENU --------\n\n");
	
		printf("Informe o vetor - 1\n");
		printf("Somatoria dos primos - 2\n");
		printf("Somatoria dos pares - 3\n");
		printf("Sair - 4\n\n");
    	printf("Qual a opcao desejada? ");
		scanf("%d", &x);
	}
}

int funcVetor() {
	int vetor[TAM];
	
	printf("\n\n");
	printf("Informe os elementos do vetor: \n");
	for(int i = 0; i < TAM; i++ ){
		
		scanf("%d", &vetor[i]);
		
	}
	
	printf("\nvetor = {  ");
	
	for( int i = 0; i < TAM; i++ ) {
		
		printf("%d  ", vetor[i]);
		
	}
	
	printf("}\n\n");
	
	if(vetor <= 0){
		
		for(int i =0; i < TAM; i++ ) {
			res[i] = 0;
		}
		
	} else {
		
		for(int i =0; i < TAM; i++ ) {
			res[i] = vetor[i];
		}
	
	}
	
	
	return 0;
}

void sumFuncPrimos() {
	int sum = 0;
	int sumPrimos = 0, primo = 0, naoPrimo = 0;
	
	for(int i = 0; i < TAM; i++ ){
			sum += res[i];
	}
	
	if(sum > 0) {
		for(int i = 0; i <= TAM; i++ ) {
			primo = 0;
			naoPrimo = 0;
			for( int j = 1; j <=TAM; j++ ){
				
				if(res[i] % j == 0 && res[i] != 1) {
					primo++;
				} else {
					naoPrimo++;
				}
				
			}
			if(primo <=  2 && res[i] != 1) {
				sumPrimos += res[i];
			}
			
		}
		printf("\nA soma dos primos e: %d!\n\n", sumPrimos);
	} else {
		printf("\nPor favor infome os valores do vetor ou os valores nao sao primos!\n\n");
	}

}

void sumPares() {
	int sum = 0;
	for(int i = 0; i < TAM; i++ ){
			if(res[i] % 2 == 0) {
				sum += res[i];
			}
	}
	if(sum > 0) {
		printf("\nA soma dos pares e : %d!\n\n", sum);
	} else {
		printf("\nPor favor infome os valores do vetor ou valores sao somente impares!\n\n");
	}
	
}


int main() {
	
	menu();
		
	return 0;	
}