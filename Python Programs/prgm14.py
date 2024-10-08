d={}
n=int(input("Enter the limit: "))
for i in range(1,n+1):
    d.update({i:(i**3)})
print(d)
