package application;

import entities.Company;
import entities.Individual;
import entities.TaxPayer;

import java.util.List;
import java.util.Locale;
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of tax payers: ");
        int n = sc.nextInt();

        List<TaxPayer> list = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            System.out.printf("Tax payer #%d data: %n", i);
            System.out.print("Individual or company (i/c)? ");
            char typePayer = sc.next().charAt(0);
            System.out.print("Name: ");
            sc.nextLine();
            String name = sc.nextLine();
            System.out.print("Anual income: ");
            Double anualIncome = sc.nextDouble();

            if(typePayer == 'i' || typePayer == 'I') {
                System.out.print("Health expenditures: ");
                Double healthExpenditures = sc.nextDouble();
                TaxPayer payer = new Individual(name, anualIncome, healthExpenditures);
                list.add(payer);
            } else {
                System.out.print("Number of employees: ");
                int numberOfEmployees = sc.nextInt();
                TaxPayer payer = new Company(name,anualIncome,numberOfEmployees);
                list.add(payer);
            }
        }

        System.out.println();
        System.out.println("Taxes paid: ");
        for (TaxPayer payer : list) {
            System.out.println(payer.getName() + ": $ " + String.format("%.2f", payer.tax()));
        }
        System.out.println();
        Double sum = 0.0;
        for (TaxPayer payer : list) {
            sum += payer.tax();
        }
        System.out.print("TOTAL TAXES: $ " + sum);
    }
}