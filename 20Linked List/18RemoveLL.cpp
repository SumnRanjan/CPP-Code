//203. Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp = head;
        if(head == NULL) return head;

        while(head != NULL && head->val == val){
            head = head->next;
        }

        while(temp->next != NULL){
            if(temp->next->val == val) 
            temp->next = temp->next->next;

            else{
                temp = temp->next;
            }
        }

        return head;
        
    }
};