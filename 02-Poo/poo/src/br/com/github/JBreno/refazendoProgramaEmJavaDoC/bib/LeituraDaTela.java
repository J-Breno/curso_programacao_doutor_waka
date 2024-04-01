package br.com.github.JBreno.refazendoProgramaEmJavaDoC.bib;

import java.util.Scanner;

public class LeituraDaTela {

    public int leDaTela(String str) {

        int num;

        System.out.printf("%s", str);

        Scanner sc = new Scanner(System.in);

        num = sc.nextInt();

        return num;
    }

}
