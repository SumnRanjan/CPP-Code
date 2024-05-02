// 1382. Balance a Binary Search Tree
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& in) {
        if (root == NULL)
            return;

        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    TreeNode* build(vector<int>& in, int s, int e) {
        if (s > e)
            return nullptr;
        int mid = (s + e)/2;

        TreeNode * root = new TreeNode(in[mid]);
        root->left = build(in , s , mid - 1);
        root->right = build(in , mid+1 , e);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> in;
        inorder(root, in);
        return build(in, 0, in.size() - 1);
    }
};