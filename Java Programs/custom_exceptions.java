import java.util.Scanner;

// class MyException extends Exception{
//     /*MyException(){
//         System.out.println("MyException!!");
//     }*/
//     void ExpMessage(){
//         System.out.println("MyException!!");
//     }
// }

class NegativePercentage extends Exception{
    NegativePercentage(){
        System.out.println("Negative number !!");
    }
}

class GreaterThan100 extends Exception{
    GreaterThan100(){
        System.out.println("Exceeds hundred !!");
    }
}

class Main{
    public static void main(String[] args){
        // try {
        //     throw new MyException();
        // } catch (MyException e) {
        //     e.ExpMessage();
        // }

        System.out.print("Enter Percentage: ");
        float percentage;

        Scanner sc=new Scanner(System.in);
        percentage=sc.nextFloat();

        try{
            if(percentage>100)
                throw new GreaterThan100();

            if(percentage<0)
                throw new NegativePercentage();
        }

        catch(NegativePercentage e){

        }

        catch(GreaterThan100 e){}
    }
}
