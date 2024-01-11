# Using Loops and other matrix


matrix = [[1,2,3],[4,5,6],[7,8,9]]
# print(matrix)
# new_m= []   

# for col in range(len(matrix[0])):
#     new_row = []
#     for row in range(len(matrix)):
#         new_row.append(matrix[row][col])
#     new_row.reverse()
#     new_m.append(new_row)
    
# matrix = new_m
# print(matrix)




# Using Transpose & swapping


for row in range(len(matrix)):
    for col in range(row+1, len(matrix[0])):
            matrix[row][col], matrix[col][row] = matrix[col][row] , matrix[row][col]
            
print("Transposed matrix:", matrix)
# Reverse each row
reversed_matrix = [row[::-1] for row in matrix]
print("Reversed matrix:", reversed_matrix)



# Using '*' operator & zip() function 


matrix[:]=list(zip(*matrix[::-1]))

# matrix[::-1]: This reverses the original matrix along its rows.

# zip(*matrix[::-1]): The zip function takes elements from multiple iterables and groups them together. In this case, it takes the reversed rows of the matrix and groups corresponding elements from each row together. The * operator is used for unpacking the reversed rows.

# list(zip(*matrix[::-1])): This converts the result of zip into a list of tuples.

# matrix[:]=list(zip(*matrix[::-1])): This updates the original matrix in-place with the transposed matrix obtained from the list of tuples. The [:] slice assignment replaces the contents of matrix with the elements of the transposed matrix.

