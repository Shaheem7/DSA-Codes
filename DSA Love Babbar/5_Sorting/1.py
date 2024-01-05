arr = [122,56,78,54,67,61,91]

for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        if arr[i]>arr[j]:
            arr[i],arr[j] = arr[j],arr[i]
    print(arr)  
            
            
print(arr)