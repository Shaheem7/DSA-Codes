
arr = [122,56,78,54,67,61,91]

n = len(arr)

for i in range(1,n):
    for j in range(n-i):
        if arr[j]>arr[j+1]:
            arr[j],arr[j+1] = arr[j+1],arr[j]
            
print(arr)