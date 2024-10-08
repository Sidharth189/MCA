l1=[1,4,7,12,89,43,67]
l2=[45,2,1,0,54,89,67,25,100]
print(l1,l2)
l3=l1+l2
print(l3)
for i in range(0,len(l3)):
    for j in range(0,len(l3)):
        if(l3[i]<l3[j]):
            temp=l3[i]
            l3[i]=l3[j]
            l3[j]=temp
print(l3)