class insufficientBalanceException extends Exception{
    public insufficientBalanceException(String message){
        super(message);
    }
}
class BankAccount{
    double balance=1000;
    void withdraw(double amount) throws insufficientBalanceException{
        if(balance<amount){
            throw new insufficientBalanceException("Insufficient Balance !!");
        }
        else{
            balance-=amount;
        }
    }
    void deposit(double amount){
        balance+=amount;
    }
}

class Main{
    public static void main(String args[]){
        BankAccount obj=new BankAccount();
        obj.deposit(2000);
        try{
            obj.withdraw(4000);
        }
        catch(Exception e){
            System.out.println("Exception caught: "+e);
        }
    }
}