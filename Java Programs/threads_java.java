class printNums extends Thread{
    int start;
    printNums(int num){
        start=num;
    }
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println(start+i);
        }
    }
}

class Main{
    public static void main(String args[]){
        printNums t1=new printNums(10);
        t1.start();

        printNums t2=new printNums(200);
        t2.start();
        
        System.out.println("End of Main....");
    }
}

//Both Main and run() will execute at the same time, since main program have very less operations it finishes first.