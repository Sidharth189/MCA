import math as m

class euclidean:
	def __init__(self):
		self.x1=int(input("Enter x1: "))
		self.y1=int(input("Enter y1: "))
		self.x2=int(input("Enter x2: "))
		self.y2=int(input("Enter y2: "))
	
	def distance(self):
		v=(self.x2-self.x1)**2+(self.y2-self.y1)**2
		d=m.sqrt(v)
		print(f"Euclidean distance: {d}")

e1=euclidean()
e1.distance()
