//104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if(root == NULL) return 0; //imp

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int count = 1;

        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front == NULL) {
                cout << endl;
                if (!q.empty()) {
                    q.push(NULL);
                    count++;
                }
            }

            else {

                if (front->left != NULL) {
                    q.push(front->left);
                }

                if (front->right != NULL) {
                    q.push(front->right);
                }
            }
        }
        return count;

        // if(root == NULL) return 0;

        // int left = maxDepth(root->left);
        // int right = maxDepth(root->right);

        // int height  = max(left, right) + 1;

        // return height;
    }
};