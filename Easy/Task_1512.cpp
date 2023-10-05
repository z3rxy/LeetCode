class Solution {

public:

    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int answer = 0;

        for (int num : nums) {
            count[num]++;
        }

        for (const auto& pair : count) {
            int count = pair.second;
            answer += (count * (count - 1)) / 2;
        }

        return answer;
    }
};