package br.com.github.JBreno.pessoa;

import com.sun.nio.sctp.PeerAddressChangeNotification;

public class Main {

    public static void modificaPessoa(Pessoa p, String nome, String email, String senha) {
        p.setNome(nome);
        p.setEmail(email);
        p.setSenha(senha);
    }

    public static void main(String[] args) {

        Pessoa p1 = new Pessoa();
        Pessoa p2 = new Pessoa();
        Pessoa p3 = new Pessoa();

        modificaPessoa(p1, "Breno", "joao@hotmail.com", "1234");
        modificaPessoa(p2, "Melo", "melo@hotmail.com", "1234");
        modificaPessoa(p3, "Luciane", "luciane@hmail.com", "1234");

        System.out.println("\n------------");
        p1.imprime();
        System.out.println("\n------------");
        p2.imprime();
        System.out.println("\n------------");
        p3.imprime();
        System.out.println("\n------------");

    }
}
