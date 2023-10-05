int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class Solution {
public:
	int largestAltitude(vector<int>& gain) {
		int maxAlt = 0, currAlt = 0;

		for (int i = 0; i < gain.size(); i++) {
			currAlt += gain[i];
			maxAlt = maxAlt > currAlt ? maxAlt : currAlt;
		}

		return maxAlt;
	}
};