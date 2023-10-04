import static java.lang.Math.max;
class Solution {
    public int longestSubarray(int[] nums) {
        int N = nums.length, prev2 = -1, prev = -1, ans = 0;
        for (int i = 0; i <= N; ++i) {
            if (i < N && nums[i] == 1) continue;
            if (i == N && prev == -1) return N - 1;
            if (prev != -1) ans = max(ans, i - prev2 - 2);
            prev2 = prev;
            prev = i;
        }
        return ans;
    }
}