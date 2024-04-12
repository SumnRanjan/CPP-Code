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

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    // NLR
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;

    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

Node *minValue(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    // if (root->left == NULL)
    //     return root;

    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxValue(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    // if (root->left == NULL)
    //     return root;

    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

bool searchInBTS(Node *root, int target)
{
    // base case
    if (root == NULL)
        return false;

    // ek case mujhe
    if (root->data == target)
        return true;

    // rest ab recursion
    bool rightans = false;
    bool leftans = false;
    if (target > root->data)
    {
        rightans = searchInBTS(root->right, target);
    }

    else
    {
        leftans = searchInBTS(root->left, target);
    }

    return rightans || leftans;
}

Node *deleteFromBST(Node *root, int target)
{

    if (root == NULL)
        return NULL;

    if (root->data == target)
    {
        // ab delete karni hai -- 4case

        // 1 case  both null
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 2nd case -- left not null hai and right null hai
        else if (root->left != NULL && root->right == NULL)
        {
            Node *childSubtree = root->left;
            delete root;
            return childSubtree;
        }

        // 3nd case -- left  null hai and right not null hai
        else if (root->left == NULL && root->right != NULL)
        {
            Node *childSubtree = root->right;
            delete root;
            return childSubtree;
        }

        // 4th case -- left not  null and right not null
        else
        {
            // left ki max value lao
            Node *maxi = maxValue(root->left);
            // replace
            root->data = maxi->data;

            // delete actual maxi
            root->left = deleteFromBST(root->left, maxi->data);
            return root;
        }
    }

    else if (root->data > target)
    {
        root->left = deleteFromBST(root->left, target);
    }

    else
    {
        root->right = deleteFromBST(root->right, target);
    }

    return root;
}

// create BST form inoredre

Node *bstFromInorder(int inorder[], int s, int e)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);

    root->left = bstFromInorder(inorder, s, mid - 1);
    root->right = bstFromInorder(inorder, mid + 1, e);

    return root;
}

//convert Bst into a sorted Doubly Sorted LL-

void convertBSTtoDLL(Node * root , Node * & head){
    if(root == nullptr) {
        return;
    }

    //RNL
    convertBSTtoDLL(root->right , head);

    //N
    root->right = head;
    if(head != NULL){
        head->left = root;
    }
    head = root;

    //l
    convertBSTtoDLL(root->left , head);
}

void printLL(Node * head){
    Node * temp = head;
    cout<<"printing the entire LL :";

    while(temp != NULL){
        cout<<temp->data <<"<->";
        temp = temp->right;
    }
    cout<<endl;
}

int main()
{
    // Node *root = NULL;
    // createBST(root);
    // levelOrder(root);

    // cout << endl
    //      << "Inorder : ";
    // inOrder(root);
    // cout << endl
    //      << "Preorder : ";
    // preOrder(root);
    // cout << endl
    //      << "Postorder : ";
    // postOrder(root);

    // cout << endl;
    // Node *minvalue = minValue(root);
    // if (minvalue == NULL)
    // {
    //     cout << "No node is tree" << endl;
    // }
    // else
    // {
    //     cout << "Min Value is :" << minvalue->data << endl;
    // }

    // cout << endl;
    // Node *maxvalue = maxValue(root);
    // if (maxvalue == NULL)
    // {
    //     cout << "No node is tree" << endl;
    // }
    // else
    // {
    //     cout << "Max Value is :" << maxvalue->data << endl;
    // }

    // 700. Search in a Binary Search Tree
    // int t;
    // cout << "Enter the target : ";
    // cin >> t;

    // while (t != -1)
    // {
    //     bool ans = searchInBTS(root, t);

    //     if (ans == true)
    //     {
    //         cout << "Found" << endl;
    //     }
    //     else
    //     {
    //         cout << "Not Found" << endl;
    //     }

    //     cout << "Enter the target : ";
    //     cin >> t;
    // }

    // int target;
    // cout << "Enter the value of target : " << endl;
    // cin >> target;

    // while (target != -1)
    // {
    //     root = deleteFromBST(root, target);
    //     cout << endl
    //          << "Print Level order : " << endl;
    //     levelOrder(root);
    //     cout << "Enter the value of target : " << endl;
    //     cin >> target;
    // }

    int inorder[] = {10,20,30,40,50,60,70};
    int size = 7;
    int s = 0;
    int e = size - 1;
    Node* root = bstFromInorder(inorder , s , e);
    levelOrder(root);

    Node * head = NULL;
    convertBSTtoDLL(root , head);
    printLL(head);

    return 0;
}