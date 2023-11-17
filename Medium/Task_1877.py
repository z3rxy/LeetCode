class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums = sorted(nums)
        mps = 0
        
        for i in range(len(nums) // 2):
            if nums[i] + nums[-i - 1] > mps:
                mps = nums[i] + nums[-i - 1]
        return mps