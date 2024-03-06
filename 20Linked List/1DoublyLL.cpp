#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int FindLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&head, Node *&tail, int data)
{
    // LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // LL is not empty
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void InsertAtTail(Node *&head, Node *&tail, int data)
{
    // LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // LL is not empty
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void InsertAtMiddle(Node *&head, Node *&tail, int data, int position)
{
    // Linklist is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // linklist is not empty
    else
    {
        int len = FindLength(head);
        if (position == 1)
        {
            InsertAtHead(head, tail, data);
        }

        else if (position == len + 1)
        {
            InsertAtTail(head, tail, data);
        }

        else
        {
            // create a node
            Node *newNode = new Node(data);

            // set prev and curr pointer
            Node *PrevNode = NULL;
            Node *currNode = head;
            while (position != 1)
            {
                PrevNode = currNode;
                currNode = currNode->next;
                position--;
            }

            // pointer update
            PrevNode->next = newNode;
            newNode->prev = PrevNode;
            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    int len = FindLength(head);

    // no element
    if (head == NULL)
    {
        cout << "Cannot Delete" << endl;
        return;
    }

    // single element
    if (head == tail)
    {
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

    if (position == 1)
    {
        // detete from head
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }

    else if (position == len)
    {
        // delete form tail
        Node *prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
    }

    else
    {
        // delete form middle
        // step 1 : set prevnode / currnode/ next node

        Node *prevnode = NULL;
        Node *currnode = head;

        while (position != 1)
        {
            prevnode = currnode;
            currnode = currnode->next;
            position--;
        }

        Node *nextnode = currnode->next;

        // update pointer
        prevnode->next = nextnode;
        currnode->prev = NULL;
        currnode->next = NULL;
        nextnode->prev = prevnode;

        // delete
        delete currnode;
    }
}

int main()
{
    // Node *head = new Node(10);
    // printLL(head);
    // cout<<FindLength(head);

    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 40);
    InsertAtHead(head, tail, 30);
    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 10);
    InsertAtTail(head, tail, 50);

    printLL(head);

    // InsertAtMiddle(head, tail, 45, 3);
    // printLL(head);

    deleteNode(head, tail, 3);
    printLL(head);

    return 0;
}