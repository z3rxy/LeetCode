class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        long dp[1001];
        dp[0] = 1;

        unordered_map<int, int> mp;
        mp[arr[0]] = 1;

        int n = arr.size();
        long mod = 1e9 + 7;
        long answer = 1;

        for (int i = 1; i < n; i++) {
            long val = 1;

            for (int j = i - 1; j >= 0; j--) {
                if (arr[i] % arr[j] == 0 && mp.find(arr[i] / arr[j]) != mp.end()) {
                    int x = arr[j];
                    int y = arr[i] / x;

                    val += dp[mp[x] - 1] * dp[mp[y] - 1];
                    val %= mod;
                }
            }
            dp[i] = val;

            mp[arr[i]] = i + 1;

            answer += val;
            answer %= mod;
        }

        return answer;
    }
};