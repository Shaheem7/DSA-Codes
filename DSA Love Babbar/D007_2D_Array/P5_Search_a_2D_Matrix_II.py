def searchMatrix(matrix, target):
    if not matrix or not matrix[0]:
        return False
    
    rows, cols = len(matrix), len(matrix[0])
    row, col = 0, cols - 1  # Start from the top-right corner

    while row < rows and col >= 0:
        current_element = matrix[row][col]

        if current_element == target:
            return True
        elif current_element < target:
            # Move down to the next row if the current element is smaller than the target
            row += 1
        else:
            # Move left to the previous column if the current element is larger than the target
            col -= 1

    return False

# Example usage:
matrix1 = [[1, 4, 7, 11, 15], [2, 5, 8, 12, 19], [3, 6, 9, 16, 22], [10, 13, 14, 17, 24], [18, 21, 23, 26, 30]]
target1 = 5
print(searchMatrix(matrix1, target1))  # Output: True

matrix2 = [[1, 4, 7, 11, 15], [2, 5, 8, 12, 19], [3, 6, 9, 16, 22], [10, 13, 14, 17, 24], [18, 21, 23, 26, 30]]
target2 = 20
print(searchMatrix(matrix2, target2))  # Output: False
