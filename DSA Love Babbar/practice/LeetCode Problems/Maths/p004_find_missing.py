nums = [7,8,9,11,12]

print(nums)


print(nums)

nums.sort()
numss = [x for x in nums if x > 0]
print(numss)


nth = numss[-1]
print(nth)

for e in range(1,numss[-1]):
    if e not in numss:
        print(e)
        break


# complexity -> O(n log n)