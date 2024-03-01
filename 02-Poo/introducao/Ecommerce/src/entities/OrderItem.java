package entities;

public class OrderItem {
	private Integer quantity;
	private Double price;
	
	private Product p1;
	
	public OrderItem() {
	}

	public OrderItem(Product p1, Integer quantity, Double price) {
		this.quantity = quantity;
		this.price = price;
		this.p1 = p1;
	}

	public Integer getQuantity() {
		return quantity;
	}

	public void setQuantity(Integer quantity) {
		this.quantity = quantity;
	}

	public Double getPrice() {
		return price;
	}
	
	public Product getProduct() {
		return p1;
	}

	public void setPrice(Double price) {
		this.price = price;
	}
	
	public Double subTotal() {
		return this.quantity * this.price;
	}
	
	
}
