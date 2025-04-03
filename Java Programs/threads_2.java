class SharedVar{
    int a;
    SharedVar(){
        a=10;
    }
}

class MyThread extends Thread{
    
    SharedVar var;
    String name;
    MyThread(SharedVar obj,String name){
        var=obj;
        this.name=name;
    }

    public void run(){
        synchronized(var){
            System.out.println("Thread: "+name+" a="+var.a);
            var.a++;
        }
        // System.out.println(name+": Shared Variable: "+var.a);
        // var.a++;
    }
}

class Main{
    public static void main(String[] args){
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