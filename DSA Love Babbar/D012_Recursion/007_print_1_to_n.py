n = 5

def print_1_to_n(n):
    # base case 
    if n==0:
        return 
    
    # recursive case
    print_1_to_n(n-1)
    print(n ,end=" ")
    
print_1_to_n(n)