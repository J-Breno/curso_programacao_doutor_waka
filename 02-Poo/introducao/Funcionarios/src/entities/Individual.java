package entities;

public class Individual extends TaxPayer{

    private Double healthExpenditures;

    public Individual(){
        super();
    }

    public Individual(String name, Double anualIncome, Double healthExpenditures) {
        super(name, anualIncome);
        this.healthExpenditures = healthExpenditures;
    }

    public Double getHealthExpenditures() {
        return healthExpenditures;
    }

    public void setHealthExpenditures(Double healthExpenditures) {
        this.healthExpenditures = healthExpenditures;
    }

    @Override
    public Double tax(){
        Double tax = 1.0;
      if(super.anualIncome < 20000.0 && this.healthExpenditures == 0){
            tax = super.anualIncome * 0.15;
        } else if(super.anualIncome < 20000.0 && this.healthExpenditures > 0) {
            tax = (super.anualIncome * 0.15) - (this.healthExpenditures * 0.50);
        } else if(super.anualIncome > 20000.0 && this.healthExpenditures == 0) {
            tax = (super.anualIncome * 0.25);
        } else {
            tax = (super.anualIncome * 0.25) - (this.healthExpenditures * 0.50);
        }
        return tax;
    }
}
