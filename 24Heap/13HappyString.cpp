//1405. Longest Happy String
class Info {
public:
    char val;
    int count;

    Info(char ch, int cnt) {
        this->val = ch;
        this->count = cnt;
    }
};

class compare {
public:
    bool operator()(Info a, Info b) { return a.count < b.count; }
};

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<Info, vector<Info>, compare> maxheap;

        if (a > 0) {
            Info temp('a', a);
            maxheap.push(temp);
        }
        if (b > 0) {
            Info temp('b', b);
            maxheap.push(temp);
        }
        if (c > 0) {
            Info temp('c', c);
            maxheap.push(temp);
        }

        string ans = "";
        while (maxheap.size() > 1) {
            Info first = maxheap.top();
            maxheap.pop();
            Info second = maxheap.top();
            maxheap.pop();

            if (first.count >= 2) {
                ans.push_back(first.val);
                ans.push_back(first.val);
                first.count -= 2;
            } else {
                ans.push_back(first.val);
                first.count--;
            }

            if (second.count >= 2 && second.count >= first.count) {
                ans.push_back(second.val);
                ans.push_back(second.val);
                second.count -= 2;
            } else {
                ans.push_back(second.val);
                second.count--;
            }

            if (first.count > 0) {
                maxheap.push(first);
            }
            if (second.count > 0) {
                maxheap.push(second);
            }
        }
        if (maxheap.size() == 1) {
            Info first = maxheap.top();
            maxheap.pop();

            if (first.count >= 2) {
                ans.push_back(first.val);
                ans.push_back(first.val);
                first.count -= 2;
            } else {
                ans.push_back(first.val);
                first.count--;
            }
        }
        return ans;
    }
};