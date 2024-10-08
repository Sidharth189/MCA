s=input("Enter a string : ")
w=s.split(" ")
d={}
for i in w:
    if i[0] not in d.keys():
        d.update({i[0]})
    else:
        d[i[0]]=[]
        d[i[0]].append(i)
print(d)