#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;


int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int x = floor(n / 3), n = nums.size();

        for (auto i : nums) {
            mp[i]++;
        }

        for (auto i : mp) {
            if (i.second > x) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};

int main() {
	vector<int> nums = {1, 2};
	int k = 4;
    Solution s;
	s.majorityElement(nums);
	return 0;
}