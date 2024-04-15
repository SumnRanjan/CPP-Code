// 876. Middle of the Linked List
class Solution
{
public:
    int Length(ListNode *head)
    {
        ListNode *temp = head;
        int len = 0;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode *middleNode(ListNode *head)
    {
        // fast and slow method
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next; // mai aaha keh sakta hu ki fast na 2 step le liya hai
                // slow ko bhi ek step aaga kar 2;
                slow = slow->next;
            }
        }
        return slow;

        // first way
        // int n = Length(head);
        // int position = (n/2)+ 1;
        // int currpos = 1;
        // ListNode * temp = head;
        // while(currpos != position){
        //     currpos++;
        //     temp = temp->next;
        // }

        // second way
        // int n = Length(head);
        // int position = (n/2)+ 1;
        // ListNode * temp = head;
        // while(position != 1){
        //     position--;
        //     temp = temp->next;
        // }
        // return temp;
    }
};