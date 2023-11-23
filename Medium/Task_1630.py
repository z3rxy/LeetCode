class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:

        answer = []
        
        def checkArithmetic(arr):
            if len(arr) < 2: return False

            arr.sort()

            diff = arr[1] - arr[0]

            for i in range(2, len(arr)):
                if arr[i] - arr[i - 1] != diff: return False
            
            return True

        for start, end in zip(l, r):
            answer.append(checkArithmetic(nums[start:end + 1]))

        return answer