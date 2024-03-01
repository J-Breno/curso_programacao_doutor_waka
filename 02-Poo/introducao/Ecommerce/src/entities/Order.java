package entities;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

import entities.enums.OrderStatus;

public class Order {
	
	private SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
	private SimpleDateFormat sdf2 = new SimpleDateFormat("dd/MM/yyyy");
	
	private Date momment = new Date();
	private OrderStatus status;
	
	private Client c1;
	
	private List<OrderItem> items = new ArrayList<>();
	
	public Order() {
	}

	public Order( OrderStatus status, Client c1) {
		this.status = status;
		this.c1 = c1;
	}

	public Date getMomment() {
		return momment;
	}

	public void setMomment(Date momment) {
		this.momment = momment;
	}

	public OrderStatus getStatus() {
		return status;
	}

	public void setStatus(OrderStatus status) {
		this.status = status;
	}

	public List<OrderItem> getItem() {
		return items;
	}
	
	public void addItem(OrderItem item) {
		items.add(item);
	}
	
	public void removeItem(OrderItem item) {
		items.remove(item);
	}
	
	public Double total() {
		Double sum = 0.0;
		for(OrderItem item : items) {
			sum += item.subTotal();
		}
		return sum;
	}
	
	public String toString() {
		StringBuilder sb = new StringBuilder();
		sb.append("ORDER SUMMARY: \n");
		sb.append("Order momment: ");
		sb.append(sdf.format(momment) + "\n");
		sb.append("Order status: ");
		sb.append(this.getStatus() + "\n");
		sb.append("Client: ");
		sb.append(c1.getName() + " (");
		sb.append(sdf2.format(c1.getBirthDate()) + ") - ");
		sb.append(c1.getEmail() + "\n");
		sb.append("Order items: \n");
		for(OrderItem item : items) {
			sb.append(item.getProduct().getName() + ", $");
			sb.append(String.format("%.2f" , item.getPrice()) + ", ");
			sb.append("Quantity: ");
			sb.append(item.getQuantity() + ", ");
			sb.append("Subtotal: $");
			sb.append(String.format("%.2f", item.subTotal()) + "\n");
		}
		sb.append("Total price: $");
		sb.append(String.format("%.2f", total()) + "\n");
		return sb.toString();
	}
}
