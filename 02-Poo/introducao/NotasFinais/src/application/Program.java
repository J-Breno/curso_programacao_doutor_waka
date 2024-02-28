package application;
import java.util.Locale;
import java.util.Scanner;

import entities.Student;

public class Program {
	public static void main(String[] args ) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		Student student = new Student();
		
		System.out.println("Digite o nome: ");
		student.name = sc.nextLine();
		System.out.println("Digite as notas: ");
		student.nota1 = sc.nextDouble();
		student.nota2 = sc.nextDouble();
		student.nota3 = sc.nextDouble();
		
		System.out.printf("Final grade = %.2f%n", student.calcularNotaFinal());
		if(student.calcularNotaFinal() < 60.0) {
			System.out.println("Failed");
			System.out.printf("Missing %.2f", student.missingPoints());
			System.out.println(" Points"); 
		} else {
			System.out.println("Pass");
		}
		
		sc.close();
	}
	
}
