#include <stdio.h> // importnado bibliotecas, pacotes, modulos

int main() { // estamos declarando uma função
    
	float peso = 75;
	
	float altura = 1.73;
	
	double imc = peso / (altura * altura);
	
	printf("O IMC calculado e: %lf.", imc); // esse lf mostra onde eu quero escrever a variável; esse prinf vem do stdio.h
	
	
	
}