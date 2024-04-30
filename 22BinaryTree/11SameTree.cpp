//100.  Same Tree 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (p == nullptr && q == nullptr) {
            return true;
        }
        // If one node is null and the other is not, they are not the same
        if (p == nullptr || q == nullptr) {
            return false;
        }
        // If the values of the nodes are different, they are not the same
        if (p->val != q->val) {
            return false;
        }
        // Recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

//2nd way
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q)
            return true;

        if (p && q) {
            return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        
        return false;
    }
};