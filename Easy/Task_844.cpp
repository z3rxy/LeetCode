class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string tempS, tempT;

        for (char curr : s) {
            if (curr != '#') {
                tempS.push_back(curr);
            }
            else if (!tempS.empty()) {
                tempS.pop_back();
            }
        }

        for (char curr : t) {
            if (curr != '#') {
                tempT.push_back(curr);
            }
            else if (!tempT.empty()) {
                tempT.pop_back();
            }
        }

        return tempS == tempT;
    }
};