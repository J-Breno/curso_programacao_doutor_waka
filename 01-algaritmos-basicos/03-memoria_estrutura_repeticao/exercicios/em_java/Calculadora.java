import java.util.Locale;
import java.util.Scanner;

public class Calculadora {
	
	public static void main(String[] args) {
	
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int opcao;
		double x;
		double y;
		double calculo;
		
		System.out.printf("%nExercicio 5 - Calculadora%n");
		
		System.out.println("1 - Soma");
		System.out.println("2 - Subtracao");
		System.out.println("3 - Divisao");
		System.out.println("4 - Multiplicacao");
		System.out.println("5 - Sair");
		
		System.out.print("Qual opcao desejada? ");
		opcao = sc.nextInt();
		
		while(opcao != 5) {
			
			System.out.printf("%nDigite o primeiro numero: ");
			x = sc.nextDouble();
			System.out.printf("Digite o segundo numero: ");
			y = sc.nextDouble();
			
			if( opcao == 1) {
				calculo = x + y;
				System.out.printf("%nA calculo de %.2f + %.2f foi = %.2f%n%n", x, y, calculo);
			} else if( opcao == 2 ) {
				calculo = x - y;
				System.out.printf("%nA calculo de %.2f - %.2f foi = %.2f%n%n", x, y, calculo);
			} else if( opcao == 3 ) {
				calculo = x / y;
				System.out.printf("%nA calculo de %.2f / %.2f foi = %.2f%n%n", x, y, calculo);
			} else if( opcao == 4 ) {
				calculo = x * y;
				System.out.printf("%nA calculo de %.2f * %.2f foi = %.2f%n%n", x, y, calculo);
			} else {
				
				System.out.println("%nDigite um numero de 1 ate 5");
			}
			
			System.out.println("1 - Soma");
			System.out.println("2 - Subtracao");
			System.out.println("3 - Divisao");
			System.out.println("4 - Multiplicacao");
			System.out.println("5 - Sair");
			
			System.out.print("Qual opcao desejada? ");
			opcao = sc.nextInt();
		
			
		}
		
		System.out.printf("%nObrigado por participar!");
		
	}
	
}