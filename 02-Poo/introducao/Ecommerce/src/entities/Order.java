package entities;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

import entities.enums.OrderStatus;

public class Order {

	private Date momment;
	private OrderStatus status;
	
	private List<OrderItem> itens = new ArrayList<>();
	
	public Order() {
	}

	public Order(Date momment, OrderStatus status) {
		this.momment = momment;
		this.status = status;
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
		return itens;
	}
	
	public void addItem(OrderItem item) {
		itens.add(item);
	}
	
	public void removeItem(OrderItem item) {
		itens.remove(item);
	}
	
	public Double total() {
		Double sum = 0.0;
		for(OrderItem item : itens) {
			sum += item.subTotal();
		}
		return sum;
	}
}
