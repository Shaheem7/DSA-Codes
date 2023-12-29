

A = [1, 2, 2 ,2, 3, 4]
B = [2, 2, 3 ,3]

n = len(A)
m = len(B)
min_int = float('-inf')

intersection = []

for i in range(n):
    for j in range(m):
        if A[i] == B[j]:
            intersection.append(A[i])
            print(A[i])
            B[j] = min_int
            break
        
print(intersection)