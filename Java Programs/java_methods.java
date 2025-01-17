import java.util.Scanner;
class Stock{
	
	int stock_no;
	
	
	// Method with no arguments and return value
	
	int quantity;
	float price;
	
	/*void cal_total()
	{
		float total=quantity*price;
		System.out.print("\n Total Price: "+total);
	}*/
	
	// Method with argument but no return value
	
	/*void cal_total(int quantity, float price)
	{
		float total=quantity*price;
		System.out.print("\n Total Price: "+total);
	}*/
	
	// Method with arguments and return value
	
	/*float cal_total(int quantity, float price)
	{
		return quantity*price;
	}*/
	
	float cal_total()
	{
		return quantity*price;
	}
	
	// constructor Function
	
	/*Stock()
	{
		stock_no=1;
		quantity=10;
		price=20;
	}*/
	
	// parameterised constructor
	
	Stock(int stk_no,int quant,float p)
	{
		stock_no=stk_no;
		quantity=quant;
		price=p;
	}
		
	public static void main(String[] args)
	{
		Stock rice=new Stock(1,20,10);
		Scanner sc=new Scanner(System.in);
		
		/*System.out.print("\n Enter the stock_no :");
		rice.stock_no=sc.nextInt();
		System.out.print("\n Enter the quantity: ");
		rice.quantity=sc.nextInt();
		System.out.print("\n Enter the price: ");
		rice.price=sc.nextFloat();*/
		
		/*System.out.print("\n Enter the stock_no :");
		rice.stock_no=sc.nextInt();
		System.out.print("\n Enter the quantity: ");
		int quantity=sc.nextInt();
		System.out.print("\n Enter the price: ");
		float price=sc.nextFloat();*/
		
		//rice.cal_total();
		
		//float total=rice.cal_total(quantity,price);
		
		//System.out.print("\n Total Price: "+total);
		
		System.out.print("\n stock_no: "+rice.stock_no);
		System.out.print("\n quantity: "+rice.quantity);
		System.out.print("\n price: "+rice.price);
		
		float total=rice.cal_total();
		System.out.print("\n Total Price: "+total);
		
	}
}
