def Sort012(arr, n):
    zeros = 0
    ones = 0
    twos = 0
    for i in range(n):
        if arr[i] == 0:
            zeros += 1
        elif arr[i] == 1:
            ones += 1
        else:
            twos += 1
            
    ans = [0 if i < zeros else 1 if i < zeros + ones else 2 for i in range(n)]
    print(ans)
    


def Sort01(arr,n):
    zeros = 0
    ones = 0
    for i in range(n):
        if arr[i] == 0:
            zeros += 1
        elif arr[i] == 1:
            ones += 1
    
    ans = [0 if i < zeros else 1 for i in range(n)]
    
    print(ans)
            


n = 10

arr = [0,1,1,0,0,1,1,1,0,0]
Sort01(arr,n)

n = 6
arr1 = [0, 1 ,2, 2, 1 ,0]
Sort012(arr1,n)