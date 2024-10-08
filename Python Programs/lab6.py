def matrix_input(rows,cols):
    matrix=[]
    for i in range(rows):
        r=[]
        for j in range(cols):
            element=int(input(f"Enter the {i}*{j} th element: "))
            r.append(element)
        matrix.append(r)
    return matrix

def display_matrix(matrix):
    rows=len(matrix)
    cols=len(matrix[0])
    for i in range(rows):
        for j in range(cols):
            print(matrix[i][j],end=" ")
        print("\n")

def add_matrix(matrix1,matrix2):
    rows=len(matrix1)
    cols=len(matrix1[0])
    #matrix=[[None for i in range(cols)] for j in range(rows)]
    matrix=[[None]*cols for i in range(rows)]
    for i in range(rows):
        for j in range(cols):
            matrix[i][j]=matrix1[i][j]+matrix2[i][j]
    return matrix

def transpose(matrix1):
    rows=len(matrix1)
    cols=len(matrix1[0])
    matrix=[[None]*rows for _ in range(cols)]
    for i in range(rows):
        for j in range(cols):
            matrix[j][i]=matrix1[i][j]
    return matrix
    
r=int(input("Enter the number of rows: "))
c=int(input("Enter the number of columns: "))

print("Enter the elements of fist matrix: ")
l1=matrix_input(r,c)

print("Enter the elemnts of second matrix: ")
l2=matrix_input(r,c)

print("\n Matrix 1: ")
display_matrix(l1)
print("\n Matrix 2: ")
display_matrix(l2)

print("Sum matrix: ")
l3=add_matrix(l1,l2)
display_matrix(l3)

print("Transpose of matrix1: ")
t=transpose(l1)
display_matrix(t)