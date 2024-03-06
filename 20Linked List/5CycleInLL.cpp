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

bool hasCycle2(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        //if loop is there
        if(fast == slow){
            return true;
        }
    }
    return false;
    
}
