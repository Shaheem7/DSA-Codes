num = 38

def add_digit(num):
    if num == 0:
        return 0
    return num % 10 + add_digit(num // 10)
