l=[]
i=0
oddsum=evensum=negsum=0
print("Enter the list elements (num): ",end="")
while i<10:
    e=int(input(" "))
    l.append(e)
    if e<0:
        negsum+=e
    else:
        if e%2!=0:
            oddsum+=e
        else:
            evensum+=e
    i+=1
print(l)
print(f"Sum of negative numbers: {negsum}")
print(f"Sum of positive even numbers: {evensum}")
print(f"Sum of positive odd numbers: {oddsum}")

