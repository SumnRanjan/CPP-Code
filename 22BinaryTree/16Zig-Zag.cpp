//103. Binary Tree Zigzag Level Order Traversal
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool LtoRdir = true;

        while(!q.empty()){
            int width = q.size();
            vector<int>Onelevel(width);
            for(int i = 0 ; i < width ; i++){
                TreeNode * front = q.front();
                q.pop();
                int index = LtoRdir ? i : width - i - 1;
                Onelevel[index] = front->val;

                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            }
            ans.push_back(Onelevel);
            //LtoRdir toggle the direction
            LtoRdir = !LtoRdir;
          
        }
        return ans;
    }
};