n = 234

def sum_of_digit(n):
    if n == 0:
        return 0
    return n % 10 + sum_of_digit(n // 10)

print("Sum of digits in {} is : {}".format(n, sum_of_digit(n)))