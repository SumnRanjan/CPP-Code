// 617. Merge Two Binary Trees
//1st Way
class Solution
{
public:
    void merge(TreeNode *root1, TreeNode *root2, TreeNode *&newNode)
    {
        if (root1 == nullptr && root2 == nullptr)
        {
            return;
        }
        else if (root1 == nullptr)
        {
            newNode = new TreeNode(root2->val);
            newNode->left = mergeTrees(nullptr, root2->left);
            newNode->right = mergeTrees(nullptr, root2->right);
            return;
        }
        else if (root2 == nullptr)
        {
            newNode = new TreeNode(root1->val);
            newNode->left = mergeTrees(root1->left, nullptr);
            newNode->right = mergeTrees(root1->right, nullptr);
            return;
        }

        int value = root1->val + root2->val;
        newNode = new TreeNode(value);
        newNode->left = mergeTrees(root1->left, root2->left);
        newNode->right = mergeTrees(root1->right, root2->right);
    }
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        TreeNode *newRoot = NULL;
        merge(root1, root2, newRoot);
        return newRoot;
    }
};

//2nd Way

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
         if(!root1 && root2) return root2;
         if(root1 && !root2) return root1;
         if(!root1 && !root2) return NULL;
         
        TreeNode *root=new TreeNode(root1->val+root2->val);
        root->left=mergeTrees(root1->left,root2->left);
        root->right=mergeTrees(root1->right,root2->right);
         return root;
    }
};
