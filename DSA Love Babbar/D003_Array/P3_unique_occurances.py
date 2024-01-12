arr = [1,2,2,1,1,3]


occ = {}

def unique_values(arr):
    
    # getting unique values 
    for i in arr:
        if i in occ:
            occ[i] += 1
        else:
            occ[i] = 1
      
unique_values(arr)
      
print(occ)

print(occ.values())


    
# def compare_values(arr):
#     for i in range(len(arr)):
#         for j in range(i + 1, len(arr)):
#             if arr[i] == arr[j]:
#                 print(f'i={i} j={j}')
#                 return True  # Values are equal
#     return False  # No equal values found

# c = compare_values(occ)

# print(c)



# # Check if the count of occurrences is unique
#         count_set = set()
#         for value in occurrences.values():
#             if value in count_set:
#                 return False
#             count_set.add(value)
        
#         return True