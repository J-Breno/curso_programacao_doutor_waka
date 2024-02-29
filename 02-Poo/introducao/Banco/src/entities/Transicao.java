package entities;

public class Transicao {
	
	private int numeroConta;
	private String nameTitularConta;
	private double deposito;
	
	public Transicao(int numeroConta, String nameTitularConta, double initalDeposit) {
		this.numeroConta = numeroConta;
		this.nameTitularConta = nameTitularConta;
		deposit(initalDeposit);
	}
	
	public Transicao(int numeroConta, String nameTitularConta) {
		this.numeroConta = numeroConta;
		this.nameTitularConta = nameTitularConta;
	}
	
	public int getNumeroConta() {
		return this.numeroConta;
	}
	
	public void setNameTitular(String nameTitular) {
		this.nameTitularConta = nameTitular;
	}
	
	public String getNameTitular() {
		return this.nameTitularConta;
	}
	
	public void deposit(double deposito) {
		this.deposito += deposito;
	}
	
	public double getDeposito() {
		return this.deposito;
	}
	
	public void saqueDoDeposito(double saque) {
		this.deposito = this.deposito - saque  - 5.0;
	}
	
	public String toString() {
		return "Account " + this.getNumeroConta() +
				", Holder: " + this.getNameTitular() + 
				", Balance: $ " + String.format("%.2f%n", this.getDeposito());
	}
	

}
