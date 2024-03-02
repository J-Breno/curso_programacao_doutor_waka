package entities;

public class ImportedProduct extends Product{
    private Double customsFee;

    public ImportedProduct(){
        super();
    }

    public ImportedProduct(String name, Double price, Double customsFee) {
        super(name, price);
        this.customsFee = customsFee;
    }

    public Double getCustomsFee() {
        return customsFee;
    }

    public void setCustomsFee(Double customsFee) {
        this.customsFee = customsFee;
    }

    public Double totalPrice(){
        return super.price = super.price * (this.customsFee / 100) ;
    }

    @Override
    public String priceTag(){
        StringBuilder sb = new StringBuilder();

        sb.append(super.name);
        sb.append(" $ ");
        sb.append(String.format("%.2f",super.price));
        sb.append(" (Customs fee: $ ");
        sb.append(String.format("%.2f",this.customsFee) + ")\n");

        return sb.toString();
    }
}
