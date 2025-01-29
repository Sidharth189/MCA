import java.util.Scanner;

class Student{
	String Name,regNo;
	double m1,m2,m3;
	
	void setData(String n,String r,double m1,double m2,double m3){
		Name=n;
		regNo=r;
		this.m1=m1;
		this.m2=m2;
		this.m3=m3;
	}
	
	double calSum(){
		return m1+m2+m3;
	}
	
}

class Student2 extends Student{
	double m4;
	
	void setAdditionalMarks(double m4){
		this.m4=m4;
	}
	
	double calSum(){	//Method overriding
		return m4+super.calSum();	//super refers to the parent class
	}
}

class Main{
	public static void main(String[] args){
		Student s=new Student();
		s.setData("Sid","Mca18",45,45,40);
		
		Student2 s2=new Student2();
		s2.setData("Tony","Mca01",35,50,45);
		s2.setAdditionalMarks(40);
		
		System.out.print("\nStudent total: ");
		System.out.print("\n"+s.calSum());
		
		System.out.print("\nStudent2 total: ");
		System.out.print("\n"+s2.calSum());
	}
}
	
