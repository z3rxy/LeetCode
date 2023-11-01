class Solution {
private:
    int last = INT_MIN;
    int count = 0;
    int max = 0;
    vector<int> modes;

    void DFS(TreeNode* node) {
        if (!node) return;

        DFS(node->left);

        if (last == node->val) {
            count++;
        }
        else {
            count = 1;
        }

        if (count > max) {
            max = count;
            modes.clear();
            modes.push_back(node->val);
        }
        else if (count == max) {
            modes.push_back(node->val);
        }

        last = node->val;

        DFS(node->right);
    }

public:
    vector<int> findMode(TreeNode* root) {
        DFS(root);
        return modes;
    }
};