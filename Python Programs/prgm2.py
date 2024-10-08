s=input("Enter a string: ")
count=0
for i in s:
    if i.islower():
        count+=1
print(f"Number of lower case characters: {count}")