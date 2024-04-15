//1019. Next Greater Node In Linked List
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ll;
        while(head){
            ll.push_back(head->val);
            head = head->next;
        }

        stack<int>st;

        for(int i = 0 ; i < ll.size() ; i++){
            while(!st.empty() && ll[i] > ll[st.top()]){
                int p = st.top();
                st.pop();
                ll[p] = ll[i];
            }
            st.push(i);
        }

        while(!st.empty()){
            ll[st.top()] = 0; 
            st.pop();
        }
        ll[ll.size() - 1] = 0;
        return ll;
    }
};