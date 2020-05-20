class Solution:
    def fib(self, N: int) -> int:
        F = [0, 1]
        
        if N < 2: return F[N]
        
        result = 0
        
        for i in range(2, N+1):
            result = F[i-1] + F[i-2]
            F.append(result)
            
        return result
