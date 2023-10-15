class Solution {
public:
    int numWays(int steps, int arrLen) {
        int n = min(arrLen, steps / 2 + 4);
        vector<long> dp(n);
        const int mod = 1e9 + 7;
        dp[0] = 1;

        for (int i = 0; i < steps; ++i) {
            auto tmp = dp;
            for (int j = 0; j < n; ++j)
                dp[j] = (tmp[j] + (j + 1 < n ? tmp[j + 1] : 0) + (j == 0 ? 0 : tmp[j - 1])) % mod;
        }

        return dp[0];
    }
};