package entities;

import java.text.SimpleDateFormat;
import java.util.Date;

public class UsedProduct extends Product{
    private Date manufactureDate;
    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

    public UsedProduct(){
        super();
    }

    public UsedProduct(String name, Double price, Date manufactureDate) {
        super(name, price);
        this.manufactureDate = manufactureDate;
    }

    public UsedProduct(String name, Double price, String format) {
    }

    public Date getManufactureDate() {
        return manufactureDate;
    }

    public void setManufactureDate(Date manufactureDate) {
        this.manufactureDate = manufactureDate;
    }

    @Override
    public String priceTag(){
        StringBuilder sb = new StringBuilder();

        sb.append(super.name);
        sb.append(" (used) $ ");
        sb.append(String.format("%.2f", super.price));
        sb.append(" (Manufacture date: ");
        sb.append(sdf.format(this.manufactureDate));
        sb.append(")\n");
        return sb.toString();
    }
}
