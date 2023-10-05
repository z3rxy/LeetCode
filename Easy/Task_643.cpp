int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class Solution {
public:
	double findMaxAverage(vector<int>& nums, int k) {
		if (nums.size() == 1) return nums[0];
		else if (k == 1) { sort(nums.begin(), nums.end()); return nums[nums.size() - 1]; };

		int left = 0, right;
		double max = 0, sum = 0;

		for (right = 0; right < k; right++) {
			sum += nums[right];
		}
		max = sum / k;
		while (right < nums.size()) {
			sum += nums[right];
			sum -= nums[left];
			max = max > sum / k ? max : sum / k;
			right++;
			left++;

		}
		return max;
	}
};