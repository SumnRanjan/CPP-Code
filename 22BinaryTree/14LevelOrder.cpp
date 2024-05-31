// 102. Binary Tree Level Order Traversal
class Solution
{
public:
    void solve(TreeNode *&root, vector<vector<int>> &ans)
    {
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            vector<int> levelNodes;

            // Traverse all nodes at current level
            for (int i = 0; i < size; ++i)
            {
                TreeNode *temp = q.front();
                q.pop();

                levelNodes.push_back(temp->val);

                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }

                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(levelNodes);
        }
    }

    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
        {
            return ans;
        }

        solve(root, ans);
        return ans;
    }
};

/// @brief
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        vector<int> vec;
        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int x = q.size();
            vec.clear();
            while (x--)
            {
                auto tp = q.front();
                q.pop();

                vec.push_back(tp->val);
                if (tp->right)
                    q.push(tp->right);
                if (tp->left)
                    q.push(tp->left);
            }
            reverse(vec.begin(), vec.end());
            ans.push_back(vec);
        }
        return ans;
    }
};