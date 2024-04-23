//767. Reorganize String
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
    string reorganizeString(string s) {
        int freq[26] = {0};

        // count frequency of all character in string
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            freq[ch - 'a']++;
        }
        // push all character in max heap
        priority_queue<Info, vector<Info>, compare> maxheap;

        // push all character into heap where freq > 0
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                Info temp(i + 'a', freq[i]);
                maxheap.push(temp);
            }
        }

        string ans = "";

        while (maxheap.size() > 1) {
            Info first = maxheap.top();
            maxheap.pop();
            Info second = maxheap.top();
            maxheap.pop();

            ans.push_back(first.val);
            first.count--;
            ans.push_back(second.val);
            second.count--;

            if (first.count > 0) {
                maxheap.push(first);
            }
            if (second.count > 0) {
                maxheap.push(second);
            }
        }

        // if 1 element bach aalg se handel karo
        if (maxheap.size() == 1) {
            Info first = maxheap.top();
            maxheap.pop();

            ans.push_back(first.val);
            first.count--;

            if (first.count != 0) {
                // ans not possible
                return "";
            }
        }

        return ans;
    }
};