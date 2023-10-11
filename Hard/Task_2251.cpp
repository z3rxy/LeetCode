class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<int> startBloom, endBloom, answer;
        int startedBloom, endedBloom;

        for (auto curr : flowers) {
            startBloom.push_back(curr[0]);
            endBloom.push_back(curr[1]);
        }

        sort(startBloom.begin(), startBloom.end());
        sort(endBloom.begin(), endBloom.end());

        for (int human : people) {
            startedBloom = upper_bound(startBloom.begin(), startBloom.end(), human) - startBloom.begin();
            endedBloom = lower_bound(endBloom.begin(), endBloom.end(), human) - endBloom.begin();
            answer.push_back(startedBloom - endedBloom);
        }

        return answer;
    }
};