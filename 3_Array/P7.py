def pair_sum(arr, s):
    ans = []

    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] + arr[j] == s:
                temp = [min(arr[i], arr[j]), max(arr[i], arr[j])]
                ans.append(temp)
                
    ans.sort()
    return ans
    
arr = [1,2,3,4,5]
s = 5

pair_sum(arr, s)

