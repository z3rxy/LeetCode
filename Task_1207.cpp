#include <map>
#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();

class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) {
		map<int, int> ocurr;
		unordered_set<int> set;

		for (int i = 0; i < arr.size(); i++) {
			if (!ocurr.count(arr[i])) {
				ocurr[arr[i]] = 1;
			}
			else {
				ocurr[arr[i]] = ocurr[arr[i]] + 1;
			}
		}

		for (auto num : ocurr) {
			if (!set.insert(num.second).second) return false;
		}
		return true;
	}
};