class Solution {
public:
    int kthGrammar(int n, int k) {
        int answer;
        for (answer = 0, k -= 1; k; k &= (k - 1)) {
            answer++;
        }
        return answer & 1;
    }
};