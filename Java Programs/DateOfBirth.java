import java.util.Scanner;

class DateOfBirth {
    int day,month,year;
    void setDate(int a,int b,int c){
        day=a;
        month=b;
        year=c;
    }    
}

class Student{
    String name,regNo;
    DateOfBirth dob;

    void setStudData(String n,String rNo,DateOfBirth d){
        name=n;
        regNo=rNo;
        dob=d;
    }

    void printSelf(){
        System.out.print("\n Name: "+name);
        System.out.print("\n Reg.No: "+regNo);
        System.out.print("\n Dob: "+dob.day+"/"+dob.month+"/"+dob.year);
    }
}

class Main{
    public static void main(String[] args)
    {
        Student stud=new Student();

        System.out.print("\n Enter Student details: ");
        Scanner sc=new Scanner(System.in);

        System.out.print("\n Name: ");
        String name=sc.next();
        System.out.print("\n Reg.No: ");
        String regNo=sc.next();

        System.out.print("Date of Birth: ");
        DateOfBirth dob=new DateOfBirth();
        int day=sc.nextInt();
        int month=sc.nextInt();
        int year=sc.nextInt();
        dob.setDate(day, month, year);

        stud.setStudData(name, regNo, dob);
        stud.printSelf();
    }
}

