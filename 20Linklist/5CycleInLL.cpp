// 141. Linked List Cycle
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        map<ListNode *, bool> table;
        ListNode *temp = head;

        while (temp != NULL)
        {
            if (table[temp] == false)
            {
                table[temp] = true;
            }

            else
            {
                return true;
            }

            temp = temp->next;
        }
        return false;
    }
};