#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// it return root node of a tree
Node *createTree()
{
    cout << "Enter the value of Node" << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // step 1 : create Node
    Node *root = new Node(data);

    // step 2 : create left subtree
    cout << "Left Node : " << root->data << endl;
    root->left = createTree();

    // step 3 : create right subtree
    cout << "Right Node : " << root->data << endl;
    root->right = createTree();

    return root;
}

void preOrderTraversal(Node *root)
{
    // NLR

    // base case
    if (root == NULL)
        return;

    // N
    cout << root->data << " ";

    // L
    preOrderTraversal(root->left);

    // R
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
    // LNR

    // base case
    if (root == NULL)
        return;

    // L
    inOrderTraversal(root->left);

    // N
    cout << root->data << " ";

    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    // LRN

    if (root == NULL)
        return;

    // L
    postOrderTraversal(root->left);

    // R
    postOrderTraversal(root->right);

    // N
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }

            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}
int main()
{
    Node *root = createTree();
    // cout << root->data << endl;

    cout << "Printing PreOrder : ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Printing InOrder : ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Printing PostOrder : ";
    postOrderTraversal(root);
    cout << endl;

    cout << "Printing LevelOrder : ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}