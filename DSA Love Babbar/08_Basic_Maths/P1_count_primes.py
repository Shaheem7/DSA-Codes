                      
            
def count_primes(n):
    count = 0
    prime = [True] * (n + 1)

    prime[0] = prime[1] = False

    for i in range(2, n):
        if prime[i]:
            count += 1
            for j in range(2 * i, n, i):
                prime[j] = False

    return count