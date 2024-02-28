/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseUsingRecursion(ListNode *prev , ListNode*curr){

        // base case 
        if(curr == NULL){
            return prev;
        }
        // first case mai karu ga solve 
        ListNode * NextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = NextNode;

        // recursion deklega
        ListNode *recursionkaans = reverseUsingRecursion(prev ,  curr);
        return recursionkaans;

    }

    ListNode* reverseList(ListNode* head) {
        ListNode * prev = NULL;
        ListNode * curr = head;

        return reverseUsingRecursion(prev , curr);

    //     while(curr != NULL){
    //         ListNode * Next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = Next;
    //     }
    // return prev;
    }
    
};