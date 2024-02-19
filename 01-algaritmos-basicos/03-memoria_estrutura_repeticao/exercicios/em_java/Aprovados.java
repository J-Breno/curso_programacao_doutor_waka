import java.util.Locale;
import java.util.Scanner;

public class Aprovados {
	
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);		
		Scanner sc = new Scanner(System.in);
	
		System.out.println("Exercicio 1 - Aprovados");

		int alunos;
		double nota;
		int aprovado = 0;
		int reprovado = 0;
		System.out.print("Digite quantos alunos: ");
		alunos = sc.nextInt();
		
		for(int i = 1; i <= alunos; i++) {
		
			System.out.printf("%nDigite a nota do %d aluno: ", i);
			nota = sc.nextDouble();
			
			if(nota >= 6) {
				aprovado++;
			} else {
				reprovado++;
			}
		
		}
		System.out.printf("Alunos aprovados: %d%n", aprovado);
		System.out.printf("Alunos reprovados: %d%n", reprovado);
	}
	
}