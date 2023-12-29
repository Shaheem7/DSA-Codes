# ar = [1,2,2,1,1,3]
ar = [-3,0,1,-3,1,1,1,-3,10,0]

arr =ar.copy()

arr.sort()

print(ar)
print(arr)

freq = []
count = 1
for i in range(len(arr)-1):
    if arr[i] == arr[i+1]:
        count +=1
    else:
        freq.append(count)
        count = 1
        
print(freq)
print(sum(freq))
print(len(arr))

if sum(freq) != len(arr):              # Because we runned loop for "len(arr)-1" and have skipped 1 element
    freq.append(len(arr)-sum(freq))

print(freq)

def are_all_elements_unique(arr):
	return len(arr) == len(set(arr))

print(are_all_elements_unique(freq))