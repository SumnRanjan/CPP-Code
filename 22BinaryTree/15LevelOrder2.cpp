// 107. Binary Tree Level Order Traversal II
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int w = q.size();
            vector<int> oneLevel;
            for (int i = 0; i < w; i++) {
                TreeNode* front = q.front();
                q.pop();
                oneLevel.push_back(front->val);

                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }

            ans.push_back(oneLevel);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};