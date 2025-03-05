import java.util.Scanner;

class Rectangle{
	double length,breadth;
	
	Rectangle(){
		System.out.println("Hi... from constructor ");
	}
	
	Rectangle(double a,double b){
		length=a;
		breadth=b;
	}
	
	void calcArea(){
		System.out.println("Area: "+length*breadth);
	}
}

class Main{
	public static void main(String[] args){
		
		Rectangle r1=new Rectangle();
		Rectangle r2=new Rectangle(10,23.2);
		r2.calcArea();
	}
}
