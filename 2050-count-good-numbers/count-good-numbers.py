class Solution:
    def countGoodNumbers(self, n: int) -> int:
        MOD = 10**9 + 7
        
        even_count = (n + 1) // 2
        odd_count = n // 2
        
        even_part = pow(5, even_count, MOD)
        odd_part = pow(4, odd_count, MOD)
        
        return (even_part * odd_part) % MOD
