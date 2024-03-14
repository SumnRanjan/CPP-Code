//160. Intersection of Two Linked Lists

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* a = headA;
        ListNode* b = headB;

        while (a->next && b->next) {
            if (a == b)
                return a;

            a = a->next;
            b = b->next;
        }

        if (a->next == NULL && b->next == NULL && a != b)
            return 0;

        if (a->next == NULL) {
            int blen = 0;
            while (b->next) {
                blen++;
                b = b->next;
            }

            while (blen--) {
                headB = headB->next;
            }
        }

        else {
            int alen = 0;
            while (a->next) {
                alen++;
                a = a->next;
            }

            while (alen--) {
                headA = headA->next;
            }
        }

        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
          
        }
        return headA;
    }
};