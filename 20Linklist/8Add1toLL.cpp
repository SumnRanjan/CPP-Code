#include <iostream>

using namespace std;

// Node structure definition
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to reverse a linked list
Node* Reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    return prev;
}

class Solution {
public:
    Node* addOne(Node* head) {
        // Reverse the linked list
        head = Reverse(head);

        // Add one
        int carry = 1;
        Node* temp = head;

        while(temp->next != NULL) {
            int totalsum = temp->data + carry;
            int digit = totalsum % 10;
            carry = totalsum / 10;

            temp->data = digit;
            temp = temp->next;
            if(carry == 0) {
                break;
            }
        }

        // Process last node
        if(carry != 0) {
            int totalsum = temp->data + carry;
            int digit = totalsum % 10;
            carry = totalsum / 10;

            temp->data = digit;

            if(carry != 0) {
                Node* newNode = new Node(carry);
                temp->next = newNode;
            }
        }

        // Reverse the linked list again
        head = Reverse(head);
        return head;
    }
};

// Function to print the linked list
void printLinkedList(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(6);

    Solution solution;
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Add one to the linked list
    head = solution.addOne(head);

    cout << "Linked List after adding one: ";
    printLinkedList(head);

    // Free memory
    while(head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
