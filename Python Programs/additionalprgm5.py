class Mother:
    def __init__(self):
        self.masset=float(input("Enter mother's asset value: "))

class Father:
    def __init__(self):
        self.fasset=float(input("Enter father's asset value: "))

class Son(Mother,Father):
    def __init__(self):
        Mother.__init__(self)
        Father.__init__(self)
        self.asset=((25*self.masset)/100)+((50*self.fasset)/100)
    
    def print(self):
        print(f"Father's asset: {self.fasset}")
        print(f"Mother's asset: {self.masset}")
        print(f"Son's asset: {self.asset}")

s=Son()
s.print()