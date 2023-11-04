class Solution:
    def getLastMoment(self, n: int, left: List[int], right: List[int]) -> int:
        if len(left) and len(right):
            return max(max(left), n - min(right))
        elif len(right) > 0:
            return n - min(right)
        else:
            return max(left)
    
        