# Define the Solution class
class Solution(object):
    def uniqueOccurrences(self, arr):
        arr.sort()

        freq = []
        count = 1
        for i in range(len(arr) - 1):
            if arr[i] == arr[i + 1]:
                count += 1
            else:
                freq.append(count)
                count = 1

        if sum(freq) != len(arr):
            freq.append(len(arr) - sum(freq))

        return self.are_all_elements_unique(freq)

    def are_all_elements_unique(self, arr):
        return len(arr) == len(set(arr))

# Test cases
test_cases = [
    [1, 2, 2, 1, 1, 3],  # Example 1
    [1, 2],             # Example 2
    [-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]  # Example 3
]

# Create an instance of the Solution class
sol = Solution()

# Verify test cases
for test in test_cases:
    result = sol.uniqueOccurrences(test)
    print(f"Input: {test}, Output: {result}")
