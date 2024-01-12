function countPrimes(n) {
    let count = 0;
    let prime = new Array(n + 1).fill(true);
  
    prime[0] =[1] = false;
  
    for (let i = 2; i < n; i++) {
      if (prime[i]) {
        count++;
        for (let j = 2 * i; j < n; j += i) {
          prime[j] = false;
        }
      }
    }
  
    return count;
  }