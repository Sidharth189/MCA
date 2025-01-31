abstract class Employee{
    double basicPay,HRA,salary;
    void setSalaryData(double bp,double hra){
        basicPay=bp;
        HRA=hra;
    }

    abstract void calcSalary(); //abstract class declaration

    void PrintSalary(){
        System.out.println("Salary: "+this.salary);
    }
}

class Permanent extends Employee{
    void calcSalary(){
        this.salary=basicPay+0.6*basicPay+HRA;
    }
}

class Temporary extends Employee{
    void calcSalary(){
        this.salary=basicPay;
    }
}

class Main{
    public static void main(String[] args){
        
        System.out.println("Permanent Employee");
        Permanent p=new Permanent();
        p.setSalaryData(30000,15000);
        p.calcSalary();
        p.PrintSalary();

        System.out.println("Temporary Employee");
        Temporary t=new Temporary();
        t.setSalaryData(20000,0);
        t.calcSalary();
        t.PrintSalary();
    }
}