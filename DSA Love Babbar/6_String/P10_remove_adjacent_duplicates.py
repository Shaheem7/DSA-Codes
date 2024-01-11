s = "abbaca"

# for i in range(len(s)-1):
#     if s[i] == s[i+1]:
#         s = s.replace(s[i:i+2], "")
#         # print(s)
    
    
stack = [1,2,3,4]    
print(stack[-1])

# class Solution(object):
#     def removeDuplicates(self, s):
#         """
#         :type s: str
#         :rtype: str
#         """
#         stack = []
    
#         for char in s:P11
#             if stack and stack[-1] == char:
#                 stack.pop()
#             else:
#                 stack.append(char)
    
#         return ''.join(stack)