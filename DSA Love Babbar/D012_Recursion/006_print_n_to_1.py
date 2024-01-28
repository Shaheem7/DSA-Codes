n = 10 

def print_n_to_1(n):
    # base case 
    if n==0:
        return 
    
    # recursive case
    print(n ,end=" ")
    print_n_to_1(n-1)

print_n_to_1(n=5)
    