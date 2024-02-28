package entities;

public class Rectangle {
	public double width;
	public double height;
	
	public double area( ) {
		return this.width * this.height;
	}
	
	public double perimeter( ) {
		return 2 * (this.height + this.width);
	}
	
	public double diagonal( ) {
		double mult = this.height * this.height + this.width * this.width;
		return Math.sqrt(mult);
	}
	
	public String toString() {
		return "Area = " + String.format("%.2f%n", this.area()) +
			   "Perimeter = " + String.format("%.2f%n", this.perimeter()) +
			   "Diagonal = " + String.format("%.2f%n", this.diagonal());
	}
}
