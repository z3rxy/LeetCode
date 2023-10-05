int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		vector<int> left(nums.size(), 0), right(nums.size(), 0);

		for (int i = 0, j = nums.size() - 1; i < nums.size() && j > -1; i++, j--)
		{
			if (i == 0 && j == nums.size() - 1) {
				left[i] = nums[i];
				right[j] = nums[j];
			}
			else {
				left[i] += nums[i] + left[i - 1];
				right[j] += nums[j] + right[j + 1];
			}
		}

		for (int i = 0; i < nums.size(); i++) {
			if (left[i] == right[i]) return i;
		}
		return -1;
	}
};