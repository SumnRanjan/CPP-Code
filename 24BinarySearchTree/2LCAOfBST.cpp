// 235. Lowest Common Ancestor of a Binary Search Tree

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL)
            return nullptr;

        // 1 case both come in left
        if (p->val < root->val && q->val < root->val) {
            TreeNode* leftans = lowestCommonAncestor(root->left, p, q);
            return leftans;
        }

        // 2 case both come in right
        if (p->val > root->val && q->val > root->val) {
            TreeNode* rightans = lowestCommonAncestor(root->right, p, q);
            return rightans;
        }

        // // 3 case p left mai h and q right
        // if (p->val < root->val && q->val > root->val) {
        //     return root;
        // }
        // // 4 case q left mai h and p right
        // if (p->val > root->val && q->val < root->val) {
        //     return root;
        // }

        return root;
    }
};