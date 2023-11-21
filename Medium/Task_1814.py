class Solution:
    def countNicePairs(self, nums: List[int]) -> int:
        rev = [nums[i] - int(str(nums[i])[::-1]) for i in range(len(nums))]
        rev = list(Counter(rev).values())

        answer = 0

        for num in rev:
            if num > 1:
                answer += comb(num, 2)
        
        return answer % (10**9 + 7)
        