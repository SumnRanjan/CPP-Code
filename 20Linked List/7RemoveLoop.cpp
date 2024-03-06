// https://www.codingninjas.com/studio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTabValue=SUBMISSION
// condingninjas  question :  Detect and Remove Loop
Node *removeLoop(Node *head)
{
    // Write your code here.
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            break;
        }
    }

    if (fast == NULL)
    {
        return head;
    }

    slow = head;

    while (fast != slow)
    {
        slow = slow->next;
        fast = fast->next;
    }

    //Remove linklist main process....

    Node *startingpoint = slow;
    Node *temp = fast;

    while (temp->next != startingpoint)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    return head;
}