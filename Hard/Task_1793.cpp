class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int answer = nums[k], mini = nums[k], i = k, j = k, n = nums.size();
        while (i > 0 || j < n - 1) {
            if ((i > 0 ? nums[i - 1] : 0) < (j < n - 1 ? nums[j + 1] : 0)) mini = min(mini, nums[++j]);
            else mini = min(mini, nums[--i]);

            answer = max(answer, mini * (j - i + 1));
        }
        return answer;
    }
};