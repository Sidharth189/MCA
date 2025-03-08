import java.util.InputMismatchException;
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        int a,b;
        System.out.print("Enter dividend and divisor: ");

        Scanner sc=new Scanner(System.in);

        try{
            a=sc.nextInt();
            b=sc.nextInt();
            
            System.out.print("\n Quotient: "+(a/b));
            System.out.print("\n Remainder: "+(a%b));
        }
        //catch(Exception e){
        catch(ArithmeticException e){
            System.out.println("Exception !!");
            System.out.println(e);
        }

        catch(InputMismatchException e){
            System.out.println("Wrong Input");
        }
    
    }
}