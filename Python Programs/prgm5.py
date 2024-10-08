st1=input("Enter string1: ")
st2=input("Enter string2: ")
for i in st1:
    count=0
    for j in st2:
        if i==j:
            count+=1
    if count==0:
        print(i,end=" ")