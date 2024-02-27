package bib; // está dentro do pacote bib
import java.util.Scanner;


public class LeituraDaTela {
	
	public int leDaTela(String str) {
		// Scanner é um tipo
		Scanner sc = new Scanner(System.in);
		
		int num;
		
		System.out.printf("%s", str);

		
		num = sc.nextInt();	
		
			
		return num;
	}
	
}
