pas=input("Enter the password: ")
a=c=n=s=0
if len(pas)>=6:
    for i in pas:       
        if i.isalpha():
            if i.islower():
                a+=1
            elif i.isupper():
                c+=1
        elif i.isnumeric():
            n+=1
        elif i in ("#","$","@"):
            s+=1
if(a>0 and c>0 and n>0 and s>0 ):
    print("Password valid")
else:
    print("Password not valid")  