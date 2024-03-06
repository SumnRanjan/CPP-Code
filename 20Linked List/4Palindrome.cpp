// 234. Palindrome Linked List
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast->next != NULL)
        {
            fast = fast->next;
            if (fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode *reverseList(ListNode *prev, ListNode *curr)
    {
        while (curr != NULL)
        {
            ListNode *Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }

    bool compareList(ListNode *head1, ListNode *head2)
    {
        while (head2 != NULL)
        {
            if (head1->val != head2->val)
            {
                return false;
            }
            else
            {
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        return true;
    }

    bool isPalindrome(ListNode *head)
    {
        // break into 2 half
        ListNode *midNode = middleNode(head);
        ListNode *head2 = midNode->next;
        midNode->next = NULL;

        // reverse the 2nd half
        ListNode *prev = NULL;
        ListNode *curr = head2;
        head2 = reverseList(prev, curr);

        // compare
        bool ans = compareList(head, head2);
        return ans;
    }
};