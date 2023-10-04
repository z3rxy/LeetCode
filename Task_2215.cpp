int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class Solution {
public:
	vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
		vector< vector<int>> answer(2);

		unordered_set<int> setNums1(nums1.begin(), nums1.end()),
			setNums2(nums2.begin(), nums2.end());

		for (int num : setNums1) {
			if (!setNums2.count(num)) answer[0].push_back(num);
		}
		for (int num : setNums2) {
			if (!setNums1.count(num)) answer[1].push_back(num);
		}
		return answer;
	}
};