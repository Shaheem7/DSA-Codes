
s = "N2 i&nJA?a& jnI2n"

s = ''.join(char.lower() for char in s if char.isalnum())  # Remove non-alphanumeric characters and convert to lowercase
print(s == s[::-1])