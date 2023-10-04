class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int i = 0, j = 0, z = 0, maxi = INT_MIN;

        for (j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) z++;

            while (z > k) {
                if (nums[i] == 0) z--;
                i++;
            }

            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};