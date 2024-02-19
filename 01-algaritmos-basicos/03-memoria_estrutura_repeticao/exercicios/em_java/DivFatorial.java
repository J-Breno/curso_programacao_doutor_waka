import java.util.Locale;
import java.util.Scanner;

public class DivFatorial {

	public static void main(String[] args) {
	
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int num = 1;
		int n;
		double fatorial;
		double expressao;
		double total = 0;
		
		System.out.print("Digite um numero: ");
		n = sc.nextInt();
		
		for(int i = n; i >= 1; i--) {

			fatorial = i;
			for(int j = i; j >= 1; j--) {

				fatorial *= j;
				
			}
			expressao = 1 / fatorial;
			total += expressao;
			
		}
		total += num;
		System.out.printf("A soma da devisao de cada fatorial por 1 e: %.4f%n", total);
		
	}
	
}