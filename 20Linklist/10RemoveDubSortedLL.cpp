//83. Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode * temp = head;
        while(temp != NULL){
            //remove karna hai
            if(temp->next != NULL && temp->val == temp->next->val){
                ListNode * NextNode = temp -> next;
                temp->next = NextNode->next;
                NextNode->next = NULL;
                delete NextNode;
            }

            else {
                temp = temp -> next;
            }
        }
        return head;
    }
};