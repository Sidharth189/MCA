import java.util.Scanner;

public class Lab_2 {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int a,b,c;
        try{
            System.out.println("Enter a: ");
            a=sc.nextInt();
            System.out.println("Enter b: ");
            b=sc.nextInt();
            System.out.println("Enter c: ");
            c=sc.nextInt();
        }
        finally{
            if(sc!=null){
                sc.close();
            }
        }

        double sol_1=(-b+Math.sqrt((b*b)-4*a*c))/(2*a);
        double sol_2=(-b-Math.sqrt((b*b)-4*a*c))/(2*a);

        System.out.println("Solution 1: "+sol_1);
        System.out.println("Solution 2: "+sol_2);


    }
}
