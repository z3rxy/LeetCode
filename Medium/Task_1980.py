class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        n = len(nums)
        nums = set(nums)
           
        for i in range(int('1' + '0' * (n - 1), 2), int('1' * n, 2) + 1):
            if bin(i)[2:] not in nums:
                return bin(i)[2:]
        return '0' * n