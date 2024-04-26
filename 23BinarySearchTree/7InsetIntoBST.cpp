//701. Insert into a Binary Search Tree
class Solution {
public:
    TreeNode* solve(TreeNode* node, int val) {
        if (node == NULL) {
            node = new TreeNode(val);
            return node;
        }

        if (val < node->val) {
            node->left = solve(node->left, val);
        }

        if (val > node->val) {
            node->right = solve(node->right, val);
        }

        return node;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return solve(root, val);
    }
};