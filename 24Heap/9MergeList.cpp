//23. Merge k Sorted Lists
class compare{
public:
    bool operator()(ListNode * a, ListNode * b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode* , vector<ListNode*> , compare>pq;

        //process first element of every LL
        for(int i = 0 ; i<lists.size() ; i++){
            ListNode * listHead = lists[i];
            if(listHead != NULL)
            pq.push(listHead);
        }

        ///for new LL
        ListNode * head = NULL;
        ListNode * tail = NULL;

        while(!pq.empty()){
            ListNode * topNode = pq.top();
            pq.pop();


            //ye fornt jo nikali h , ye hamari first node h
            if(head == NULL){
                //first node insert
                head = topNode;
                tail = topNode;

                if(tail->next != NULL){
                    pq.push(tail->next);
                }
            }
            else{
                tail->next = topNode;
                tail = topNode;
                if(tail->next != NULL){
                    pq.push(tail->next);
                }
            }
        }

        return head;
    }
};