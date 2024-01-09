
s = "N2 i&nJA?a& jnI2n"

# s = ''.join(char.lower() for char in s if char.isalnum())  # Remove non-alphanumeric characters and convert to lowercase
# print(s == s[::-1])




s  = s.lower()
ch = []
for i in s:
    if i.isalnum():
        ch.append(i)

print(ch)

print(ch == ch[::-1])


