# arr= [1, 2, 3, 4, 4]
arr = [6, 3, 1 ,5, 4 ,3 ,2]


# approach 1

# for i in range(len(arr)):
#     for j in range(i+1,len(arr)):
#         # print(f"{i}-{j}")
#         if arr[i] == arr[j]:
#             print(arr[i])
#             break


# approach 2

new = set(arr)
new_arr = list(new)
final_arr = arr + new_arr

ans = 0
for i in range(len(final_arr)):
    ans = ans^final_arr[i]
print(ans)