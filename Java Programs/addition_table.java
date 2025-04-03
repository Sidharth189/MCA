class addition_table extends Thread{
    int num;
    addition_table(int num){
        this.num=num;
    }
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println(num+" * "+i+" = "+num*i);
        }
    }
}

class Main{
    public static void main(String args[]){
        addition_table thread1=new addition_table(5);
        addition_table thread2=new addition_table(10);
        
        thread1.start();
        thread2.start();
    }
}