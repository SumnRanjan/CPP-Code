#include <iostream>
#include <queue>
#include <map>

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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    // asli traversal start krete h

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
            // valid node wala case
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

void createMapping(int inorder[], int size, map<int, int> &valueToIndexMap)
{
    for (int i = 0; i < size; i++)
    {
        int element = inorder[i];
        int index = i;
        valueToIndexMap[element] = index;
    }
}

int searchInorder(int inorder[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == element)
            return i;
    }
    return -1;
}

Node *constructTreeFromPreAndInorderTraversal(map<int, int> &valueToIndexMap, int preorder[], int inorder[], int &preOrderIndex, int inorderStart, int inorderEnd, int size)
{
    // mujhe pre order ko by reference pass karna hoga
    if (preOrderIndex >= size || inorderStart > inorderEnd)
        return NULL;

    // case 1 mai solve karta hu baki
    int element = preorder[preOrderIndex];
    preOrderIndex++;
    Node *root = new Node(element);

    // search for root  in inorder
    // int position = searchInorder(inorder, size, element); //TC - O(n)
    int position = valueToIndexMap[element]; // TC - O(1)

    // ab recursion
    root->left = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preorder, inorder, preOrderIndex, inorderStart, position - 1, size);
    root->right = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preorder, inorder, preOrderIndex, position + 1, inorderEnd, size);

    return root;
}

Node *constructTreeFromPostAndInorderTraversal(map<int, int> &valueToIndexMap, int postorder[], int inorder[], int &postIndex, int inorderStart, int inorderEnd, int size)
{

    if (postIndex < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // 1case mai solve karu ga

    int element = postorder[postIndex];
    postIndex--;
    Node *root = new Node(element);

    // search karo inorder me
    int position = valueToIndexMap[element];

    // baaki recursion sambhal lega
    // right ki call pehle lagegi

    root->right = constructTreeFromPostAndInorderTraversal(valueToIndexMap , postorder , inorder , postIndex , position + 1 , inorderEnd , size);
    root->left = constructTreeFromPostAndInorderTraversal(valueToIndexMap , postorder , inorder , postIndex , inorderStart , position - 1 , size);

    return root; 
}
    
int main()
{
    int inorder[] = {10, 8, 6, 2, 4, 12};
    int preorder[] = {2, 8, 10, 6, 4, 12};
    int size = 6;
    int preOrderIndex = 0;
    int inorderStart = 0;
    int inorderEnd = 5;
    map<int , int> valueToIndexMap;
    createMapping(inorder , size , valueToIndexMap);

    Node *root = constructTreeFromPreAndInorderTraversal(valueToIndexMap,preorder, inorder, preOrderIndex, inorderStart, inorderEnd, size);
    cout << "Printing the entire tree: " << endl;
    levelOrderTraversal(root);
    // int inorder[] = {8, 14, 6, 2, 10, 4};
    // int postorder[] = {8, 6, 14, 4, 10, 2};
    // int size = 6;
    // int postIndex = size - 1;
    // int inorderStart = 0;
    // int inorderEnd = size - 1;
    // map<int, int> valueToIndexMap;
    // createMapping(inorder, size, valueToIndexMap);
    // Node *root = constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, inorderStart, inorderEnd, size);
    // cout << "Printing the entire tree: " << endl;
    // levelOrderTraversal(root);

    return 0;
}