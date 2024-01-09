s = "daabcbaabcbc"
part = "abc"

while part in s:
    # for i in range(2):
    s = s.replace(part,"")
    
    
# print(part in s)

print(s)
# print(s.find(part))