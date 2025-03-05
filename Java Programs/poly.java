import java.util.Scanner;

class Rectangle{
	double length,breadth;
	
	void setSides(double a){
		System.out.println("Equal length assigned to sides ");
		this.length=a;
		this.breadth=a;
	}
	
	void setSides(double a,double b){
		System.out.println("double length assigned to sides ");
		this.length=a;
		this.breadth=b;
	}
	
	void setSides(int a,int b){
		System.out.println("Integer length assigned to sides ");
		this.length=a;
		this.breadth=b;
	}
	
	void calcArea(){
		System.out.print("\n Area: "+this.length*this.breadth);
	}
}

class MainClass{
	public static void main(String[] args){
		
		Scanner sc=new Scanner(System.in);
		
		System.out.print("\n Rectangle 1: ");
		Rectangle r1=new Rectangle();
		System.out.print("\n Enter the length: ");
		double length=sc.nextDouble();
		System.out.print("\n Enter the breadth: ");
		double breadth=sc.nextDouble();
		
		r1.setSides(length,breadth);
		r1.calcArea();
		
		System.out.println("\n Rectangle 2: ");
		Rectangle r2=new Rectangle();
		System.out.print("\n Enter the side: ");
		double side=sc.nextDouble();
		
		r2.setSides(side);
		r2.calcArea();
		
		System.out.println("\n Rectangle 3: ");
		Rectangle r3=new Rectangle();
		System.out.print("\n Enter the length: ");
		length=sc.nextInt();
		System.out.print("\n Enter the breadth: ");
		breadth=sc.nextInt();
		
		r1.setSides(length,breadth);
		r1.calcArea();
			
	}
}
