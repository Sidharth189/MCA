s1=input("Enter string 1: ")
s2=input("Enter string 2: ")
for i in s1:
    count=0
    for j in s2:
        if i==j:
            count+=1
            
    if count>0:
        print(i)

            