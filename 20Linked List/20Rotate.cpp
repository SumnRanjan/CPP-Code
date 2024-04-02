//  61. Rotate List
class Solution {
public:
    int getLength(ListNode* head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head)
            return 0;

        int len = getLength(head);
        int acutalrotate = (k % len);
        if (acutalrotate == 0)
            return head;

        int newLastNodePos = len - acutalrotate - 1;
        ListNode* newlastNode = head;

        for (int i = 0; i < newLastNodePos; i++) {
            newlastNode = newlastNode->next;
        }

        ListNode * newhead = newlastNode->next;
        newlastNode->next = 0;

        ListNode * it = newhead; 
        while(it->next){
            it = it->next;
        }

        it->next = head;
        return newhead;
    }
};