package entities;

public class Student {
	
	public String name;
	public double nota1;
	public double nota2;
	public double nota3;
	
	public double calcularNotaFinal() {
		return this.nota1 + this.nota2 + this.nota3;
	}
	
	public double missingPoints( ) {
		
		if(this.calcularNotaFinal() < 60) {
			return 60.0 - calcularNotaFinal();
		} else {
			return 0.0;
		}
	}
}
