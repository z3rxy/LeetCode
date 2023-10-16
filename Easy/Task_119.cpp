class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer(rowIndex + 1, 0);
        answer[0] = 1;

        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                answer[j] += answer[j - 1];
            }
        }

        return answer;
    }
};
