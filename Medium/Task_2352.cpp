class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        map<vector<int>, int> m;

        int answer = 0, n = grid.size();

        for (int i = 0; i < n; i++) {
            m[grid[i]]++;
        }
        for (int i = 0; i < n; i++) {
            vector<int> v;
            for (int j = 0; j < n; j++) {
                v.push_back(grid[j][i]);
            }
            if (m[v] > 0) {
                answer += m[v];
            }
        }
        return answer;
    }
};