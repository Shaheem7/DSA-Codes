matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target = 30


def l_search(matrix, target):
    for row in range(len(matrix)):
        for col in range(len(matrix[0])):
            if target == matrix[row][col]:
                # return True
                print("True")
                break

def b_search(matrix, target):

    if not matrix or not matrix[0]:
        return False

    rows, cols = len(matrix), len(matrix[0])
    start, end = 0, rows * cols - 1

    while start <= end:
        mid = (start + end) // 2
        mid_element = matrix[mid // cols][mid % cols]

        if mid_element == target:
            print("True")
            return True
        elif mid_element < target:
            start = mid + 1
        else:
            end = mid - 1

    return False


    


            
b_search(matrix, target)





