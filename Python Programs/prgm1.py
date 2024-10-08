s=input("Enter a string: ")
print(f"original string : {s}")
result=''
for i in range(0,len(s),2):
    result+=s[i]
print(f"After removing odd indexed characters: {result}")
