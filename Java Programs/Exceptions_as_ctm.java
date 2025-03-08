/*Exceptions as control transfer mechanisms */

class Main{
    public static void main(String[] args){
        int num=10;
        try{
            if(num%2==0){
                throw new Exception();
            }
            else{
                System.out.println("Odd !!");
            }
        }
        catch(Exception e){
            System.out.println("Even !!");
        }
        System.out.println("Hello World !!");
    }    
}
