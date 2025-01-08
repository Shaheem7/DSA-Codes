def check(nums):

nums.sort()
n = len(nums)

for i in range(n):
   for j in range(i+1,n):
       if nums[i] == nums[j]:
           return True