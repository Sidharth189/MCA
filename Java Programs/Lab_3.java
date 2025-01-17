import java.util.Scanner;

public class Lab_3 {
    public static void main(String[] args){

        int ch=1;

        while(ch!=0){
        System.out.print("\n1. Area of circle\n2. Area of triangle\n3. Area of square\n4. Area of rectangle\n5. Area of parallelogram\n6. Area of ellipse");
        System.out.print("\nEnter your choice: ");

        Scanner sc=new Scanner(System.in);
        ch=sc.nextInt();

        
            switch(ch){
                
                case 1: System.out.print("\n Enter the radius: ");
                    int radius=sc.nextInt();
                    System.out.print("\n Area: "+3.14*Math.pow(radius,2));
                    break;

                case 2: System.out.print("\n Enter the breadth: ");
                    int breadth=sc.nextInt();
                    System.out.print("\n Enter the height: ");
                    int height=sc.nextInt();
                    System.out.print("\n Area: "+ (breadth*height)/2);
                    break;

                case 3: System.out.print("\n Enter the side: ");
                    int side=sc.nextInt();
                    System.out.print("\n Area: "+Math.pow(side,2));
                    break;

                case 4:System.out.print("\n Enter the breadth: ");
                    breadth=sc.nextInt();
                    System.out.print("\n Enter the length: ");
                    int length=sc.nextInt();
                    System.out.print("\n Area: "+ length*breadth);
                    break;

                case 5:System.out.print("\n Enter the base: ");
                    int base=sc.nextInt();
                    System.out.print("\n Enter the height: ");
                    height=sc.nextInt();
                    System.out.print("\n Area: "+ base*height);
                    break;

                case 6:System.out.print("\n Enter the length of semi-major axis: ");
                    int a=sc.nextInt();
                    System.out.print("\n Enter the length of semi-minor axis: ");
                    int b=sc.nextInt();
                    System.out.print("\n Area: "+ 3.14*a*b);
                    break;
                
                default: System.out.print("\n Invalid choice !!");
            }
        }      
    }
}
