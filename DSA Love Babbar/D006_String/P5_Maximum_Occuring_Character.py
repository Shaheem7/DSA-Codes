# stri = "testsample"

# freqs = {}

# for i in stri:
#     if i in freqs:
#         freqs[i] += 1
#     else:
#         freqs[i] = 1
        
# print(freqs)

# max_freq = 0
# max_char = 'z'

# for char, freq in freqs.items():
#     if freq > max_freq or (freq == max_freq and char<max_char):
    
#         max_freq = freq
#         max_char = char
        
# print(max_char)


def get_max_occurring_char(string):
    count = [0] * 26  # Assuming input string contains only lowercase alphabets
    
    # Count occurrences of each character
    for char in string:
        count[ord(char) - ord('a')] += 1
        
    print(ord(char))
    print(ord('a'))
    print(len(count))
    
    max_char = 'a'  # Initialize character with smallest lexicographical value
    max_count = 0   # Initialize maximum count of a character
    
    # Find the character with maximum count and smallest lexicographical order
    for i in range(26):
        if count[i] > max_count:
            max_count = count[i]
            max_char = chr(i + ord('a'))
        elif count[i] == max_count and chr(i + ord('a')) < max_char:
            max_char = chr(i + ord('a'))
    
    return max_char



# Example usage
input_str = "testsample"
result = get_max_occurring_char(input_str)
print("Maximum occurring character:", result)
