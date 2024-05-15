//102. Binary Tree Level Order Traversal
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> vec;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int x = q.size();
            vec.clear();
            while(x--) {
                auto tp = q.front();
                q.pop();

                vec.push_back(tp->val);
                if(tp->right) q.push(tp->right);
                if(tp->left) q.push(tp->left);
            }
            reverse(vec.begin(), vec.end());
            ans.push_back(vec);
        }
        return ans;
    }
};