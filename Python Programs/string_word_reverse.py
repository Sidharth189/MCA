str=input("Enter a string: ")
                                    #USING STRING FUNCTION split()
'''l=str.split()
for i in range(len(l),0,-1):
    print(l[i-1],end=")'''

                                    #WITHOUT USING STRING FUNCTION
l=[]
length=len(str)
for i in range(length):
    l.append(str[i])

p=length
for i in range(length-1,-1,-1):
    if(l[i]==" "):
        for j in range(i+1,p,1):
            print(l[j],end="")
        print(" ",end="")
        p=i
    elif(i==0):
        for j in range(i,p,1):
            print(l[j],end="")





    
