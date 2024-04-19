// 99. Recover Binary Search Tree
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
//ye code mai help liya tha 
    void modify(TreeNode* root, vector<int>& nums, int& index) {
        if (root == NULL)
            return;

        modify(root->left, nums, index);
        root->val = nums[index];
        index++;
        modify(root->right, nums, index);
    }

    void recoverTree(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        sort(ans.begin(), ans.end());

        int index = 0;
        modify(root, ans, index);
    }
};