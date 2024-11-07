class Employee:
	def __init__(self):
		self.id=int(input("Enter ID: "))
		self.name=input("Enter name: ")
		self.desgn=input("Enter designation: ")
		self.dept=input("Enter department: ")

class salary(Employee):
	def __init__(self):
		Employee.__init__(self)
		self.basic=float(input("Enter basic amount: "))
		self.hra=8250
		self.da=(110*self.basic)/100
		self.allowance=(35*self.basic)/100
	
	def netsalary(self):
		print("Employee details: \n")
		print(f"Name: {self.name}")
		print(f"Emp ID: {self.id}")
		print(f"Designation: {self.desgn}")
		print(f"Department: {self.dept}") 
		print(f"Net salary: {self.basic+self.hra+self.da+self.allowance}")
		
s1=salary()
s1.netsalary()
