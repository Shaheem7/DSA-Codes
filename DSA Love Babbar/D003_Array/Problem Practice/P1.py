nums = [1,2,3,4,5,6,7]
k = 3

# arr = []
# for i in range(k+1,len(nums)):
#     arr.append(nums[i])
    
# for i in range(k+1):
#     arr.append(nums[i])
# print(arr)



for i in range(k):
    a=nums.pop()
    nums.insert(0,a)
    
print(nums)
