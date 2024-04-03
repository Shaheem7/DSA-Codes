 

nums = [4,3,2,7,8,2,3,1]
 
freq = {}
for i in nums:
    if i in freq:
        freq[i] += 1
    else :
        freq[i] = 1
        
result = []

for j in freq:
    if freq[j] > 1:
        result.append(j)
        
print(freq)
print(result)
        
