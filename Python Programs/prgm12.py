l1=[1,4,5,6,"king","dcb"]
l2=["loser","sid",1,2,6]
d={}
for i in zip(l1,l2):
    d.update({i})
print(d)