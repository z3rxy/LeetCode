class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](const int& a, const int& b) -> bool {
            bitset<32> num1(a);
            bitset<32> num2(b);
            return num1.count() == num2.count() ? a < b : num1.count() < num2.count();
            });
        return arr;
    }
};
