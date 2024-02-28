package application;
import java.util.Locale;
import java.util.Scanner;

import entities.Transicao;


public class Program {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		double deposito;
		
		System.out.print("Enter account number: ");
		int numCount = sc.nextInt();
		Transicao transicao;
		System.out.print("Enter account holder: ");
		sc.nextLine();
		String name = sc.nextLine();
		
		System.out.print("Is there na initial deposit (y/n)? ");
		char trueOrFalse = sc.next().charAt(0);
		if(trueOrFalse == 'y' || trueOrFalse == 'Y') {
			System.out.print("Enter initial deposit value: ");
			deposito = sc.nextDouble();
			 transicao = new Transicao(numCount, name, deposito);
		} else {
			 transicao = new Transicao(numCount, name);
		}
		
		System.out.println();
		System.out.println("Account data: ");
		System.out.println(transicao);
		
		System.out.print("Enter a deposity value: ");
		deposito = sc.nextDouble();
		transicao.setDeposito(deposito);
		System.out.println("Update account data: ");
		System.out.println(transicao);
		
		System.out.print("Enter a withdraw value: ");
		deposito = sc.nextDouble();
		transicao.saqueDoDeposito(deposito);
		
		System.out.println("Update account data: ");
		System.out.println(transicao);
	}
}
