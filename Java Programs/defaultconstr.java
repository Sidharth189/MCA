class DemoObj{
	int a;
	double b;
	
	void printSelf(){
		System.out.println("a="+a);
		System.out.println("\nb="+b);
	}
}

class Main{
	public static void main(String[] args){
		int x;
		double y;
		
		DemoObj o=new DemoObj();
		o.printSelf();
	}
}
