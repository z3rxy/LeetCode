class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        prefix_sum = 0
        total_sum = sum(nums)
        res = [0] * len(nums)
        for i, num in enumerate(nums):            
            res[i] = num * ( 2 * i - len(nums)) - 2 * prefix_sum + total_sum
            prefix_sum += num
        return res 