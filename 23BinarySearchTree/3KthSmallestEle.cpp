//230. Kth Smallest Element in a BST
//1st way
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) { // always pass answer by pass refererce mai aaha galti karta hu...
        if (root == nullptr)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);
        return ans[k - 1];
    }
};


//2ndway
class Solution {
public:
    int kthSmallest(TreeNode* root, int& k) {
        if (root == nullptr)
            return -1;

        // LNR
        int leftans = kthSmallest(root->left, k);
        if (leftans != -1)
            return leftans;

        k--;
        if (k == 0) {
            return root->val;
        }

        int right = kthSmallest(root->right, k);
        return right;
    }
};