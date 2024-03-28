//2095. Delete the Middle Node of a Linked List
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * slow = head;
        ListNode * fast = head;
        ListNode * temp = head;

        if(head->next == NULL) return NULL;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }

        while(temp->next != NULL){
            if(temp->next == slow){
                temp->next = temp->next->next;
                slow->next = NULL;
                delete slow;
                break;
            }

            temp = temp->next;
        }
    
        return head;
    }
};