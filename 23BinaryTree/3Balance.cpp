//110. Balanced Binary Tree
class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        int finalans = max(left, right) + 1;

        return finalans;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;

        int left = height(root->left);
        int right = height(root->right);

        int diff = abs(left - right);

        bool currNode = (diff <= 1);

        bool leftans = isBalanced(root->left);
        bool rightans = isBalanced(root->right);

        if (currNode && leftans && rightans)
            return true;
        else
            return false;
    }
};