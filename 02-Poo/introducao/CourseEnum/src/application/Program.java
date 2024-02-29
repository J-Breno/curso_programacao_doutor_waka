package application;
import java.util.Date;
import entities.Order;
import entities.enums.OrderStatus;
import java.util.Scanner;
import java.util.Locale;

public class Program {
	
	public static void main(String[] args) {
		
	Order order = new Order(1080, new Date(), OrderStatus.PEDING_PAYMENT);
	
	OrderStatus os1 = OrderStatus.DEVIVERED;
	OrderStatus os2 = OrderStatus.valueOf("DEVIVERED");
	
	System.out.println(os1);
	System.out.println(os2);
	System.out.println(order.getDate());
	
	}
}
