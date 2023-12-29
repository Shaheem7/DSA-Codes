
arr = [4,3,2,7,8,2,3,1]

arr.sort()

freq = []
count = 1
for i in range(len(arr) - 1):
    if arr[i] == arr[i + 1]:
        count += 1
    else:
        freq.append(count)
        count = 1

if sum(freq) != len(arr):
    freq.append(len(arr) - sum(freq))
    
    
print(freq)