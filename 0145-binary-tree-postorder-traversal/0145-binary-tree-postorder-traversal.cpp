class Solution {
    vector<int> ans;

    void preorder(TreeNode* node) {
        if (node == NULL)
            return;

        preorder(node->left);
        preorder(node->right);
        ans.push_back(node->val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};