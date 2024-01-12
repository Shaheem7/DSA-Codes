def spiralOrder(matrix):
    result = []

    while matrix:
        # Traverse top row
        result += matrix.pop(0)

        # Traverse right column
        if matrix and matrix[0]:
            for row in matrix:
                result.append(row.pop())

        # Traverse bottom row
        if matrix:
            result += matrix.pop()[::-1]

        # Traverse left column
        if matrix and matrix[0]:
            for row in matrix[::-1]:
                result.append(row.pop(0))

    return result

# Example usage:
matrix1 = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print("Spiral order:", spiralOrder(matrix1))

matrix2 = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]
print("Spiral order:", spiralOrder(matrix2))
