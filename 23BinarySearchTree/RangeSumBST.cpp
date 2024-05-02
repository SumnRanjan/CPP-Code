// 938. Range Sum of BST
// 1st way
class Solution {
public:
    void inorder(TreeNode * root , vector<int>&in){
        if(root == NULL)
            return ;
        
        inorder(root->left , in);
        in.push_back(root->val);
        inorder(root->right , in);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>in;
        inorder(root , in);
        int sum = 0;
        for(int i = 0 ; i<in.size() ; i++){
            if(in[i] >= low && in[i] <= high){
                sum+= in[i];
            }
        }
        return sum;
    }
};

//2nd way

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int ans = 0;

        bool wasInRange = false;
        if(root->val >= low && root->val <= high){
            wasInRange = true;
            ans += root->val;
        }

        if(wasInRange){
            ans += rangeSumBST(root->left , low , high) + rangeSumBST(root->right , low , high);
        }

        else if(root->val < low){
            ans += rangeSumBST(root->right , low , high);
        }

        else{
            ans += rangeSumBST(root->left , low , high);
        }

        return ans;
    }
};