class Solution:
    def countHomogenous(self, s) -> int:
        res = 0
        for c, s in groupby(s):
            n = len(list(s))
            res += n * (n + 1) / 2
        return int(res % (10**9 + 7))    