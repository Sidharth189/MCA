import java.util.Scanner;

public class Lab_4 {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        System.out.print("\n Enter the string: ");
        String str=sc.nextLine();

        int end=str.length()-1;
        int start=0;
        int f=0;
        while(start<=end){
            if(str.charAt(start)!=str.charAt(end)){
                f++;
            }
            start++;
            end--;
        }

        if(f>0){
            System.out.print("String is a palindrome !!");
        }
        else{
            System.out.print("String is not a palindrome !!");
        }
    }
}
