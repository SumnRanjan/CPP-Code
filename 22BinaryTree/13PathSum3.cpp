//437. Path Sum III
class Solution {
public:
    long long int ans = 0;
    void pathfromOneRoot(TreeNode* root, long long int Sum) {
        if (root == NULL)
            return;

        if (Sum == root->val) {
            ans++;
        }

        pathfromOneRoot(root->left, Sum - root->val);
        pathfromOneRoot(root->right, Sum - root->val);
    }
    int pathSum(TreeNode* root, long long int targetSum) {
        if (root) {
            pathfromOneRoot(root, targetSum);
            pathSum(root->left , targetSum);
            pathSum(root->right , targetSum);
        }
        return ans;
    }
};