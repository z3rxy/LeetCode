class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        deque<int> queue;
        int answer = nums[0];

        for (int i = 0; i < nums.size(); ++i) {
            nums[i] += queue.size() ? queue.front() : 0;
            answer = max(answer, nums[i]);

            while (queue.size() && nums[i] > queue.back()) {
                queue.pop_back();
            }

            if (nums[i] > 0) queue.push_back(nums[i]);
            if (i >= k && queue.size() && queue.front() == nums[i - k]) queue.pop_front();
        }
        return answer;
    }
};