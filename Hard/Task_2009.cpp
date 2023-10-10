class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), answer = INT_MAX, curr, expMax;

        sort(nums.begin(), nums.end());
        vector<int> uniqueNums(nums.begin(), unique(nums.begin(), nums.end()));

        for (int i = 0; i < uniqueNums.size(); i++) {
            curr = uniqueNums[i];
            expMax = curr + n - 1;

            auto it = upper_bound(uniqueNums.begin(), uniqueNums.end(), expMax);
            int pos = distance(uniqueNums.begin(), it);
            answer = min(answer, n - (pos - i));
        }
        return answer;
    }
};