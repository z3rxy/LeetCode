class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        
        arr.sort()

        arr[0] = 1
        current = 1

        for i in range(1, len(arr)):
            n = arr[i]
            if current == n: continue
            elif n > current:
                current += 1

        return current