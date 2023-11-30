class Solution:
    def minimumOneBitOperations(self, n: int) -> int:
        if n <= 1:
            return n
        bit = 0
        while (1 << bit) <= n:
            bit += 1
        return ((1 << bit) - 1) - self.minimumOneBitOperations(n - (1 << (bit - 1)))