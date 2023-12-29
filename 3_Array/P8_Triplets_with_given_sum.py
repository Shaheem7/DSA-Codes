def three_sum(nums):
    ans = []

    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            for k in range(j+1, len(nums)):
                if i != j and i != k  and j != k and (nums[i] + nums[j] + nums[k] == 0):
                    # print(f'{nums[i]},{nums[j]},{nums[k]}')
                    ans.append([nums[i],nums[j],nums[k]])
              
    
    # print(ans)
    # print(sorted(ans))
    
    temp = []
    for e in ans:
        e.sort()
        # print(e)
        temp.append(e)
        
    for i in range(len(temp)-1):
        for j in range(i+1,len(temp)):
            if temp[i] == temp[j]:
                temp.pop(i)
            
    print(temp)
nums = [-1,0,1,2,-1,-4]
s = 5

three_sum(nums)

                    # if nums[i] + nums[j] == s:
                    #     temp = [min(nums[i], nums[j]), max(nums[i], nums[j])]
                    #     ans.append(temp)
