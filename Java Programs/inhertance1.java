
class Employee{
	String name,empId;
	void setData(String name,String empId){
		this.name=name;
		this.empId=empId;
	
	}
	void printSelf(){
		System.out.println("(self)");
		System.out.println("Name: "+this.name);
		System.out.println("Emp id: "+this.empId);
	}
}

class Manager extends Employee{
	void printEmployeeData(Employee obj){
		System.out.println("(By Manager: )");
		System.out.println("Name: "+obj.name);
		System.out.println("Emp Id: "+obj.empId);
	}
}

class Main{
	public static void main(String[] args){
		Employee e1=new Employee();
		e1.setData("Raju","Emp01");
		e1.printSelf();
		
		Manager m=new Manager();
		m.setData("Raj","Emp18");
		m.printSelf();
		m.printEmployeeData(e1);
	}
}
		
	
