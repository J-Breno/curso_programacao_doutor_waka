#include <stdio.h>

int main() {
	
	printf("Exercicio 1\n");
	printf("\n");
	printf("Desenvolva o codigo em C de um programa em que o usuario informa a nota de n ");
    printf("alunos e o programa conta quantos alunos foram aprovados (nota >= 6)");
    printf(" e quantos alunos foram reprovados (nota < 6).\n");
	
	int alunos;
	float nota;
	int reprovados = 0;
	int aprovados = 0;
	
	printf("Digite quantos alunos voce vai querer analisar: ");
	scanf("%d", &alunos);
	
	for(int i = 1; i <= alunos; i++) {
		
		printf("Digite a nota do %d° aluno: ", i);
		scanf("%f", &nota);
		
		if(nota > 5) {
			aprovados++;
		} else {
			reprovados++;
		}
	}
	
	printf("O numero de aprovados sao: %d\n", aprovados);
	printf("O numero de reprovados sao: %d", reprovados);
	
	return 0;
}