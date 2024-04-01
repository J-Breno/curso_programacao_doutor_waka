package br.com.github.JBreno.ponteiroEmJava;

public class Main {

    public static void imprimePessoa(Pessoa p ) {
        System.out.println("Nome: " + p.getNome() + "\nEmail: " + p.getEmail());

    }

    public static void main(String[] args) {
        Pessoa p1 = new Pessoa();
        p1.setNome("Breno");
        p1.setEmail("joao@hotmail.com");
        imprimePessoa(p1);

        System.out.println("===========================");

        Pessoa p2 = p1;
        p2.setNome("João Breno");
        imprimePessoa(p1);
    }
}
