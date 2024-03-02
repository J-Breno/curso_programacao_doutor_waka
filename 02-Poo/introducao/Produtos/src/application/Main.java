package application;

import entities.ImportedProduct;
import entities.Product;
import entities.UsedProduct;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Locale;


public class Main {
    public static void main(String[] args) throws ParseException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        List<Product> list = new ArrayList<>();

        System.out.print("Enter the number of products: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            System.out.printf("Product #%d data: \n", i);
            System.out.print("Common, used or imported (c/u/i)? ");
            char typeProduct = sc.next().charAt(0);
            System.out.print("Name: ");
            sc.nextLine();
            String name = sc.nextLine();
            System.out.print("Price: ");
            double price = sc.nextDouble();
            if(typeProduct == 'i' || typeProduct == 'I') {
                System.out.print("Customs fee: ");
                double customsFee = sc.nextDouble();
                Product pro = new ImportedProduct(name, price, customsFee);
                list.add(pro);
            } else if(typeProduct == 'u' || typeProduct == 'U') {
                sc.nextLine();
                System.out.print("Manufacture date (DD/MM/YYYY): ");
               Date date = sdf.parse(sc.nextLine());

                Product pro = new UsedProduct(name,price, date);
                list.add(pro);
            } else {
                Product pro = new Product(name, price);
                list.add(pro);
            }
        }

        System.out.println();
        System.out.println("Price tags");

        for (Product pro : list) {
            System.out.print(pro.priceTag());
        }

        sc.close();
    }
}