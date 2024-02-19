import java.util.Locale;
import java.util.Scanner;

public class Primo {

    public static void main(String[] args) {
	
	   Scanner sc = new Scanner(System.in);
	   Locale.setDefault(Locale.US);
	   
	   int x;
	   int primo = 0;
	   int naoPrimo = 0;
	   
	   System.out.print("Digite um numero: ");
	   x = sc.nextInt();
	   
	   for(int i = 1; i <= x; i++) {
	   
			if( x % 2 == 0 ) {
				primo++;
			} else {
				naoPrimo++;
			}
	
	   }
		if(primo > 2 || x == 1) {
			System.out.printf("%d Nao e primo%n", x);
		} else {
			System.out.printf("%d E primo%n", x);
		}
		
	}

}