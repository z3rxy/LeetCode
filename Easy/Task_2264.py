class Solution:
    def largestGoodInteger(self, num: str) -> str:
        answer = '' 
        count = 1
        for i in range(1, len(num)):
            if num[i] == num[i-1]:
                count+=1
            else:
                count = 1
            if count == 3:
                answer = max(answer, num[i] * 3)
                
        return answer