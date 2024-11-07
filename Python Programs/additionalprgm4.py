class Grandfather:
	def __init__(self):
		self.gfasset=float(input("Enter the value of grandfather's assets: "))
		
	def total(self):
		print(f"Grandfather's asset: {self.gfasset}")
		
		
class Father(Grandfather):
	def __init__(self):
		super().__init__()
		self.fasset=float(input("Enter the value of fathers asset's: "))
		self.total=(self.fasset*50)/100
	
	def totalasset(self):
		print("Fathers asset: {self.total}")

class Son(Father):
	def __init__(self):
		super().__init__()
		self.sasset=float(input("Enter son's asset: "))
		self.stotal=(self.total*50)/100
		
	def asset(self):
		print(f"Son's asset: {self.stotal}")

s=Son()
s.total()
s.totalasset()
s.asset()			
		
