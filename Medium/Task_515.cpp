class Solution {
public:
    void helper(TreeNode* node, int level, vector<int>& answer) {
        if (node == NULL) {
            return;
        }

        if (answer.size() < level + 1) {
            answer.push_back(node->val);
        }
        else {
            if (answer[level] < node->val) {
                answer[level] = node->val;
            }
        }

        helper(node->left, level + 1, answer);
        helper(node->right, level + 1, answer);
    }

    vector<int> largestValues(TreeNode* root) {
        vector<int> answer;
        if (root == NULL) {
            return answer;
        }

        helper(root, 0, answer);

        return answer;
    }
};