string = "Hello"

st = string
# Method 1
print(string[::-1])

# Method 2
print("".join(reversed(string)))

# Method 3
print("".join(string[i] for i in range(len(string) - 1, -1, -1)))

# Method 4
print("".join(string[i] for i in reversed(range(len(string)))))