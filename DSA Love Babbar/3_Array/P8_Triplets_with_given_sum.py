def three_sum(nums):
    ans = []

    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            for k in range(j+1, len(nums)):
                if i != j and i != k and j != k and nums[i] + nums[j] + nums[k] == 0:
                    temp = [nums[i],nums[j],nums[k]]
                    ans.append(temp)
            
                
    print(ans)
    return ans
    
nums = [-1,0,1,2,-1,-4]

s = 5

three_sum(nums)


# Chatjpt 

def three_sum(nums):
    nums.sort()
    result = []

    for i in range(len(nums) - 2):
        # Skip duplicates
        if i > 0 and nums[i] == nums[i - 1]:
            continue

        left = i + 1
        right = len(nums) - 1

        while left < right:
            total = nums[i] + nums[left] + nums[right]

            if total < 0:
                left += 1
            elif total > 0:
                right -= 1
            else:
                result.append([nums[i], nums[left], nums[right]])

                # Skip duplicates
                while left < right and nums[left] == nums[left + 1]:
                    left += 1
                while left < right and nums[right] == nums[right - 1]:
                    right -= 1

                left += 1
                right -= 1

    return result

# Example usage:
nums = [-1, 0, 1, 2, -1, -4]
distinct_triplets = three_sum(nums)
print("Distinct triplets with sum 0:", distinct_triplets)

