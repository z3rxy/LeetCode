int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class Solution {
public:
	int maxOperations(vector<int>& nums, int k) {
		if (nums.size() == 1 && nums[0] != k) return 0;
		else if (nums.size() == 2 && nums[0] + nums[1] != k) return 0;

		int left = 0, right = nums.size() - 1, counter = 0;

		sort(nums.begin(), nums.end());

		while (left < right) {
			if (nums[left] + nums[right] == k) {
				counter++;
				left++;
				right--;
			}
			else if (nums[left] + nums[right] < k) left++;
			else right--;
		}
		return counter;
	}
};