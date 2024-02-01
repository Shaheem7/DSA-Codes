ans = 1
x = 2
n = 10
                                                ####
# for i in range(n):
#     ans = ans * x
# print(ans)


                                                ####
# def power(x:float, n:int) -> float:
#     # base case
#     if n==0:
#         return 1
    
#     # recursive case
#     return x * power(x, n-1)

# print(power(x, n))


class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n < 0:
            x = 1 / x
            n = -n
        return self.power(x, n)
    
    def power(self, x: float, n: int) -> float:
        # Base case
        if n == 0:
            return 1.0
        # Recursive case
        half = self.power(x, n // 2)
        if n % 2 == 0:
            return half * half
        else:
            return half * half * x
