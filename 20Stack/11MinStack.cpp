//Min Stack - 155 LeetCode
class MinStack {
public:
    vector<pair<int, int>> st;
    MinStack() {

    }

    void push(int val) {
        if (st.empty()) {
            pair<int, int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }

        else {
            pair<int, int> p;
            p.first = val;
            int OldMin = st.back().second;
            p.second = min(OldMin , val);
            st.push_back(p);
        }
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        pair<int ,int> rightmost = st.back();
        return rightmost.first;
    }

    int getMin() {
        pair<int,int> rightmost = st.back();
        return rightmost.second;
    }
};

