package bib;

public class Data {
	
	int dia;
	int mes;
	int ano;
	
	public Data(int dia, int mes, int ano) {
		this.dia = dia;
		this.mes = mes; // o this está apontando para fora da função
		this.ano = ano;	
	}
	
	public void imprimirDataNaTela() {
		System.out.printf("%d/%d/%d", this.dia, this.mes, this.ano);
	}

}
