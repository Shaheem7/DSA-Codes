class Solution:
    def romanToInt(self, s: str) -> int:
        dictionary = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        # Base case
        if len(s) == 0:
            return 0
        
        # Processing
        if len(s) > 1 and dictionary[s[0]] < dictionary[s[1]]:
            return dictionary[s[1]] - dictionary[s[0]] + self.romanToInt(s[2:])
        else:
            return dictionary[s[0]] + self.romanToInt(s[1:])

problem = Solution()
print(problem.romanToInt("III"))  # Output: 3