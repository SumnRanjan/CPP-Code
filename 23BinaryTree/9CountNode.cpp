//222. Count Complete Tree Nodes
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        // LNR
        if (root == NULL)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    int countNodes(TreeNode* root) {
        vector<int> ans;
        int count = 0;
        inorder(root, ans);
        count = ans.size();
        return count;
    }
};