#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        // cout << "default ctor is called" << endl;
        this->next = NULL;
    }

    Node(int data)
    {
        // cout << "para ctor is called" << endl;
        this->data = data;
        this->next = NULL;
    }
};

// Print LinkList -->
void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Count Number of Node of linklist -->
int CountNode(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Insert Node at head in linklist -->
void insetAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        //  empty LL
        // step 1 : create a new node
        Node *newNode = new Node(data);

        // step 2: update head
        head = newNode;
        tail = newNode;
    }

    else
    {
        // none empty linklist
        // create new node
        Node *newNode = new Node(data);

        // attach new Node to head node
        newNode->next = head;

        // update head
        head = newNode;
    }
}

// Insert Node at tail in linklist -->
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // empty LL
        // step 1: Create a new node
        Node *newNode = new Node(data);

        // step 2: update tail and head or tail ispar point kar do
        tail = newNode;
        head = newNode;
    }

    else
    {
        // non empty LL
        // step 1: Create a new node
        Node *newNode = new Node(data);
        // step 2: tail node ko attach karo  newNode se
        tail->next = newNode;
        // step 3: update tail
        tail = newNode;
    }
}

// Insert at any position
void InsertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    int length = CountNode(head);

    if (position <= 1)
    {
        insetAtHead(head, tail, data);
    }

    else if (position > length)
    {
        insertAtTail(head, tail, data);
    }

    else
    {
        // insert at middle of linklist
        //step 1: create a node
        Node *NewNode = new Node(data);

        //step 2: traverse pre // curr to position
        Node * pre = NULL;
        Node * curr = head;

        while (position != 1)
        {
            pre = curr;
            curr = curr->next;
            position--;   
        }

        //step 3: attach pre to newnode
        pre->next = NewNode ;

        //step 4: attach new to current node
        NewNode->next = curr;
        
    }
}

// Tail create
void createTail(Node *head, Node *&tail)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // jab ye loop khatm ho gaya hoga tab ye temp wala pointer
    // khada hoga last node pr tab tail = temp kar k last node pa le aoo
    tail = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 50);

    PrintLL(head);

    InsertAtPosition(head , tail , 5 , 2);
    PrintLL(head);

    // creation of node
    //  Node  a;

    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);
    // Node *sixth = new Node(60);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;

    // // Linklist create ho chuki hai
    // Node *head = first;
    // Node *tail = sixth;

    // cout << "Printing the LL" << endl;
    // PrintLL(head);

    // // cout<<"Printing Number of Nodes : ";
    // // int ans = CountNode(head);
    // // cout<<ans<<endl;

    // // cout<<"Printing The LL : ";
    // // insetAtHead(head, tail, 100);
    // // PrintLL(head);

    // cout << "Printing The LL : ";
    // InsertAtTail(head, tail, 300);
    // PrintLL(head);

    return 0;
}