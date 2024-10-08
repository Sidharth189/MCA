n=int(input("Enter the limit: "))
for i in range(n):
    for j in range(n):
        if(i==j or j==(n-1-i)):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print("")