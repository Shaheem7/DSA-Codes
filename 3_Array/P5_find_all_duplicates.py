arr = [4,3,2,7,8,2,3,1]

hash = {}


for num in arr:
    if num not in hash:
        hash[num] = 1
    else:
        hash[num] += 1
        
print(hash)

dup = []

for key, val in hash.items():
    if val > 1:
        dup.append(key)
        
print(dup)