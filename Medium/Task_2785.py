class Solution:
    def sortVowels(self, s: str) -> str:
        answer = []

        l = []
        l.extend(s)

        vowels = 'aeiouAEIOU'
        vowels_list = [c for c in l if c in vowels]
        vowels_list.sort()

        j = 0
        for i in range(len(l)):
            if l[i] in vowels:
                answer.append(vowels_list[j])
                j += 1
            else:
                answer.append(l[i])
        
        return ''.join(answer)
 