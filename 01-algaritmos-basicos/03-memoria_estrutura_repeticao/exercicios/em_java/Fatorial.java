import java.util.Locale;
import java.util.Scanner;

public class Fatorial {

	public static void main(String[] args) {
	
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Exercicio 2 - Fatorial\n");
		
		int n;
		double soma;
		System.out.print("Digite um numero: ");
		n = sc.nextInt();
		soma = n;
		for( int i = n; i >= 1; i--) {
			
			soma *= i;
			
		}
		System.out.printf("O fatorial de %d e: %.2f", n, soma);
	}
	
}