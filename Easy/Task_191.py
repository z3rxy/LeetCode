class Solution:
    def hammingWeight(self, n: int) -> int:
        bit_count = bin(n)[2:]

        return bit_count.count('1')
        