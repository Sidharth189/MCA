import java.util.Scanner;

class Lab_1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the limit :");
        int limit=sc.nextInt();

        int a=0,b=1,i=0,temp;

        System.out.print("\n Fibonacci Series: ");
        while(i<limit)
        {
            System.out.print(a+" ");
            temp=a;
            a=b;
            b=b+temp;
            i++;
        }
    }
}