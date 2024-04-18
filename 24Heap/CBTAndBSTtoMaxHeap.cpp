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

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // its not a first node
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void createBST(Node *&root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter the data: " << endl;
        cin >> data;
    }
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }

            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void storeInorder(Node *root, vector<int> &in)
{
    if (root == NULL)
        return;

    storeInorder(root->left, in);
    in.push_back(root->data);
    storeInorder(root->right, in);
}

void replacePostOrder(Node * root , vector<int>in ,int &index ){
    if(root == NULL) return;

    replacePostOrder(root->left , in , index);
    replacePostOrder(root->right , in , index );
    root->data = in[index];
    index++;
}

Node * ConverBSTintoMaxHeap(Node *root)
{
    vector<int> inorder;
    storeInorder(root, inorder);
    //replace the node values with the sorted inorder values . using post order
    int index = 0;
    replacePostOrder(root , inorder , index);
    return root;
}

int main()
{
    Node * root = NULL;
    createBST(root);
    cout<<"Printing BST"<<endl;
    levelOrder(root);
    cout<<endl;

    cout<<endl<<"Converting To Heap" <<endl;

    root = ConverBSTintoMaxHeap(root);
    cout<<"Printing Heap"<<endl;
    levelOrder(root);

    return 0;
}   