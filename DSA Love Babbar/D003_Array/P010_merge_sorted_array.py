nums1 = [1,2,3,0,0,0]
m = 3 
nums2 = [2,5,6]
n = 3

for i in nums2:
    nums1.append(i)
    
nums1.sort()
nums1 = [x for x in nums1 if x!=0]

print(nums1)




# nums1 = [1, 2, 3, 0, 0, 0]
# m = 3
# nums2 = [2, 5, 6]
# n = 3

# # Merge nums2 into nums1
# index1 = m - 1
# index2 = n - 1
# merge_index = m + n - 1

# while index1 >= 0 and index2 >= 0:
#     if nums1[index1] > nums2[index2]:
#         nums1[merge_index] = nums1[index1]
#         index1 -= 1
#     else:
#         nums1[merge_index] = nums2[index2]
#         index2 -= 1
#     merge_index -= 1

# # If there are remaining elements in nums2, copy them to nums1
# while index2 >= 0:
#     nums1[merge_index] = nums2[index2]
#     index2 -= 1
#     merge_index -= 1

# print(nums1)