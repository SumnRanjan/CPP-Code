//  84. Largest Rectangle in Histogram -- Leetcode

class Solution {
public:
    vector<int> nextSmallestIndex(vector<int>& arr) {
        vector<int> ans(arr.size());
        stack<int> st;
        st.push(-1);

        for (int i = arr.size() - 1; i >= 0; i--) {
            int curr = arr[i];
            while (st.top() != -1 && arr[st.top()] >= curr) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallestIndex(vector<int>& arr) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            int curr = arr[i];
            while (st.top() != -1 && arr[st.top()] >= curr) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {

        vector<int> next = nextSmallestIndex(heights);
        for (int i = 0; i < heights.size(); i++) {
            if (next[i] == -1) {
                next[i] = heights.size(); //aaha pa galti hogi
            }
        }

        vector<int> prev = prevSmallestIndex(heights);

        vector<int> area(next.size());
        int maxi = INT_MIN;
        for (int i = 0; i < next.size(); i++) {
            int width = next[i] - prev[i] - 1;
            int length = heights[i];
            int Currarea = width * length;
            maxi = max(maxi, Currarea);
        }

        return maxi;
    }
};



 

     