class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> curr;

        for (int i = 0; i < n; i++) {
            if (asteroids[i] > 0 || curr.empty()) {
                curr.push(asteroids[i]);
            }
            else {
                while (!curr.empty() && curr.top() > 0 && curr.top() < abs(asteroids[i])) {
                    curr.pop();
                }

                if (!curr.empty() && curr.top() == abs(asteroids[i])) {
                    curr.pop();
                }
                else {
                    if (curr.empty() || curr.top() < 0) {
                        curr.push(asteroids[i]);
                    }
                }
            }
        }

        vector<int> answer(curr.size());

        for (int i = (int)curr.size() - 1; i > -1; i--) {
            answer[i] = curr.top();
            curr.pop();
        }
        return answer;
    }
};