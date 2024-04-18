//958. Check Completeness of a Binary Tree
class Solution {
public:


    bool levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool nullFound = false;

        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front == NULL) {
                nullFound = true;
            }

            else {
                if (nullFound)
                    return false;
                q.push(front->left);
                q.push(front->right);
            }
        }
        return true;
    }

    bool isCompleteTree(TreeNode* root) { 
        return levelOrder(root); 
    }
};