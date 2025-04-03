class SharedVar{
    int a;
    SharedVar(){
        a=10;
    }

    void printVar(String s){
        System.out.println(s+": a = "+a);
        a++;
    }
}

class MyThread extends Thread{
    SharedVar var;
    String name;
    MyThread(SharedVar obj,String s){
        var=obj;
        name=s;
    }
    public void run(){
        var.printVar(name);
    }
}
class Main{
    public static void main(String args[]){
        SharedVar obj=new SharedVar();
        MyThread t1=new MyThread(obj,"Thread 1");
        MyThread t2=new MyThread(obj,"Thread 2");
        MyThread t3=new MyThread(obj,"Thread 3");

        t1.start();
        t2.start();
        t3.start();

        System.out.println("End of Main...");
    }
}