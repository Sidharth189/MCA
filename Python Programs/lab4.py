class Circle:
    def __init__(self,radius):
        self.radius=radius
    def area(self):
        return 3.14*(self.radius*self.radius)
    def perimeter(self):
        return 3.14*(self.radius)*2

r=int(input("Enter the radius: "))
c1=Circle(r)
print("Area: ",c1.area())
print("Perimeter: ",c1.perimeter())

    
