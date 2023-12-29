#
# Input:rr a = [1,2,2,1,1,3]
# Output: true
# Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.


arr = [1, 2, 2, 1, 1, 3]

ar = []

for i in arr:
    if i not in ar:
        ar.append(i)

print(ar)

for i in ar:
    for j in range(len(arr)):




# for i in arr:
