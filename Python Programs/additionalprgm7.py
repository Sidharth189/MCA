class Shape:
	def __init__(self):
		self.dim1=float(input("Enter dimension 1: "))
		self.dim2=float(input("Enter dimension 2: "))
	
	def printArea():
		pass
		
class Rectangle(Shape):
	def __init__(self):
		super().__init__()
	
	def printArea(self):
		area=self.dim1*self.dim2
		print(f"Area: {area}")

class Triangle(Shape):
	def __init__(self):
		super().__init__()
	
	def printArea(self):
		area=1/2*self.dim1*self.dim2
		print(f"Area: {area}")
		
print("Rectangle:")
s1=Rectangle()
print("Triangle :")
s2=Triangle()
s1.printArea()
s2.printArea()
