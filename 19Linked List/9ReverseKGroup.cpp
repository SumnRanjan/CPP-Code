// 25. Reverse Nodes in k-Group
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
    int CountNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
            return head;
        }

        if (head->next == NULL) {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;
        ListNode* NextNode = curr->next;

        int len = CountNode(head);
        if(len < k ){
            return head;
        }

        while (pos < k) {
            NextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NextNode;
            pos++;
        }

        ListNode* Recans = NULL;

        if (NextNode != NULL) {
            Recans = reverseKGroup(NextNode, k);
            head->next = Recans;
        }

        return prev;
    }
};