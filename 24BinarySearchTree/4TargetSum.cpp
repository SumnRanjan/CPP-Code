// 653. Two Sum IV - Input is a BST
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);

        int s = 0;
        int e = ans.size() - 1;

        while (s < e) {
            int sum = ans[s] + ans[e];
            if (sum == k) { 
                return true; 
            }
            else if (sum > k) {
                e--;
            }
            else {
                s++;
            }
        }
        return false;
    }
};