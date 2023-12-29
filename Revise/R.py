arr = [1,2,3]

n = len(arr)

for i in range(n):
    for j in range(i+1,n):
        print(f'{i}-{j}')
        if arr[i] == arr[j]:
            print(f'equal {i}-{j}')
            break
        
        
print(len(arr))
# print(arr[5])