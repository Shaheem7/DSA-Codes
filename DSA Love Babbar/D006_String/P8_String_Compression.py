chars = ["a","a","b","b","c","c","c"]

freq = {}

for char in chars:
    if char in freq:
        freq[char] += 1
    else:
        freq[char] = 1

print(freq)

print(freq.values())

stri = ""

for key, value in freq.items():
    if value==1:
        stri += key
    elif 1<value :
        stri += key + str(value)
        
        
        
print(stri)