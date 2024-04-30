// 101. Symmetric Tree
class Solution {
public:
    bool Mirror(TreeNode* p , TreeNode * q) {
        if (!p && !q)
            return true;

        if (p && q)
            return (p->val == q->val) && Mirror(p->left, q->right) &&
                   Mirror(p->right , q->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return Mirror(root->left , root->right);
    }
};