package entities;

public class Product {
	private String name; // encapsulando usando o private
	private double price;
	private int quantity;
	
	public Product() {
		
	}
	
	public Product(String name, double price, int quantity ) {
		this.name = name; // o this faz referência para o próprio objeto
		this.price = price;
		this.quantity = quantity;
	}
	
	public Product(String name, double price) {
		this.name = name;
		this.price = price;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getName() {
		return this.name;
	}
	
	public void setPrice(double price) {
		this.price = price;
	}
	
	public double getPrice() {
		return this.price;
	}
	
	public int getQuantity() {
		return this.quantity;
	}
	
	public double totalValueInStock() {
		return this.price * this.quantity;
	}
	
	public void addProducts(int quantity) {
		this.quantity += quantity;
	}
	
	public void removeProducts(int quantity) {
		this.quantity -= quantity;
	}
	
	public String toString() {
		return  this.getName() + ", $ " +
		String.format("%.2f", this.price) +
		", " + this.quantity + " units, Total: $ " +
		String.format("%.2f", this.totalValueInStock());				
	}
	
}