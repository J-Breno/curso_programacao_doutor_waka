package br.com.github.JBreno.pessoa;

public class Pessoa {

    public String nome;
    public String email;
    public String senha;

    public String getNome() {
        return this.nome;
    }

    public String getEmail() {
        return this.email;
    }

    public String getSenha() {
        return this.senha;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    public void imprime() {

        System.out.printf("Nome: %s%n", this.getNome());
        System.out.printf("Email: %s%n", this.getEmail());
        System.out.printf("Senha: %s%n", this.getSenha());

    }
}
