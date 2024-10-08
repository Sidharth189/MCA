
def sort_list(l):
    for i in range(len(l)-1):
        for j in range(i+1,len(l)):
            if(l[i]>l[j]):
                temp=l[i]
                l[i]=l[j]
                l[j]=temp

n=int(input("Enter the number of elements in the list: "))
lis=[]
for i in range(n):
    value=int(input(f"Enter element {i+1}: "))
    lis.append(value)
print(f"List: {lis}")
sort_list(lis)
print(f"Non-descreasing sorted list: {lis}")
