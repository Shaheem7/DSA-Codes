two_d = [[1,2,3,6],[4,5,6,7],[7,8,9,8]]


def wavePrint(arr, nRows, mCols):
    ans = []

    for col in range(mCols):
        if col % 2:
            # odd Index -> Bottom to
            for row in range(nRows - 1, -1, -1):
                ans.append(arr[row][col])
        else:
            # 0 or even index -> top to bottom
            for row in range(nRows):
                ans.append(arr[row][col])

    return ans
            
wavePrint(two_d,3,4)