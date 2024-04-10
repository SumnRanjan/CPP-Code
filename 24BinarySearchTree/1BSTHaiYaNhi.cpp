//98. Validate Binary Search Tree

//1st way
class Solution {
public:
    void inorder(TreeNode * root , vector<int> &ans){
        //LNR
        if(root == NULL) return;
        inorder(root->left , ans);
        ans.push_back(root->val);
        inorder(root->right , ans);

    }
    bool isValidBST(TreeNode* root) {
        
        vector<int>ans;
        inorder(root , ans);
        for(int i = 0 ; i < ans.size() -1 ; i++){
            if(ans[i] >= ans[i + 1] )
            return false;
        }
        
        return true;
        
    }


};

//2nd way

class Solution {
public:
    bool solve(TreeNode* root, long long int lower,long long int upper) {
        if (root == NULL)
            return true;

        bool cond1 = (root->val > lower);
        bool cond2 = (root->val < upper);
        bool leftans = solve(root->left, lower , root->val);
        bool rightans = solve(root->right, root->val , upper );

        if (cond1 && cond2 && leftans && rightans)
            return true;

        else
            return false;
    }

    bool isValidBST(TreeNode* root) {

        long long int lower = LLONG_MIN;
        long long int upper = LLONG_MAX;

        bool ans = solve(root, lower, upper);
        return ans;
    }
};