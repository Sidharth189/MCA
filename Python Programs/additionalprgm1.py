class Power:
	def __init__(self,num1,num2):
		self.num1=num1
		self.num2=num2
	
	def power(self):
		return pow(self.num1,self.num2)

num1=int(input("Enter a number: "))
num2=int(input("Enter the exponent: "))
s1=Power(num1,num2)
print(f"Power: {s1.power()}")		
