package br.com.github.JBreno.refazendoProgramaEmJavaDoC.bib;

public class Data {

    public int dia;
    public int mes;
    public int ano;

    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }

    public void imprimeDataNaTela() {
        if( this.mes < 10 && this.dia < 10) {
            System.out.printf("0%d/0%d/%d\n", this.dia, this.mes, this.ano );
        } else if(this.mes < 10 ) {
            System.out.printf("%d/0%d/%d\n", this.dia, this.mes, this.ano );
        } else if (this.dia < 10) {
            System.out.printf("0%d/%d/%d\n", this.dia, this.mes, this.ano );
        } else {
            System.out.printf("%d/%d/%d\n", this.dia, this.mes, this.ano );
        }
    }

}
