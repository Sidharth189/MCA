import java.util.*;

class SharedVar{
    final int limit;
    //boolean iseven=False;
    int i=1;

    synchronized void printOdd(){
        while(i<=limit ){
            try{
                if(i%2==0){
                    wait();
                }else{
                    System.out.println("Odd:"+i);
                    i++;
                    notify();
                }
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }

    synchronized void printEven(){
        while(i<=limit){
            try{
                if(i%2==1){
                    wait();
                }else{
                    System.out.println("Even:"+i);
                    i++;
                    notify();
                }
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }

    SharedVar(int limit){
        this.limit=limit;
    }
}

class OddThread extends Thread{
    
    SharedVar var;

    public void run(){
        var.printOdd();
    }
    OddThread(SharedVar var){
        this.var=var;
    }
}

class EvenThread extends Thread{
    SharedVar var;

    public void run(){
        var.printEven();
    }
    EvenThread(SharedVar var){
        this.var=var;
    }
}
class Main{
    public static void main(String[] args){

        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the limit: ");
        int limit=sc.nextInt();

        SharedVar obj=new SharedVar(limit);

        OddThread t1=new OddThread(obj);
        EvenThread t2=new EvenThread(obj);

        t1.start();
        t2.start();
    }
}