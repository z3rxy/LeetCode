class Solution:
    def numberOfWays(self, corridor: str) -> int:
        mod = 1_000_000_007
        left  = 0 
        mid   = 0
        right = 1  
        
        for item in corridor : 
            if item == "S" : 
                left = mid 
                mid, right = right, mid 
            else : 
                right = (right + left) % mod 
        
        return left 