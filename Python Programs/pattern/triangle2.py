n=int(input("Enter the limit: "))
for i in range(n):
    for j in range(n-i):
        print("*",end=" ")
    for j in range(0,i):
        print(" ",end=" ")
    print("")