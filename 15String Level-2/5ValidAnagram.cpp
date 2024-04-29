//242. Valid Anagram
//Method 1
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();

        if(n1!=n2)
        return false;

        sort(s.begin() , s.end());
        sort(t.begin(), t.end());

        for(int i =0 ; i<n1 ; i++)
        {
            if(s[i]!=t[i])
            return false;
        }
        return true;
    }
};

// Method 2
class Solution {
public:
    bool isAnagram(string s, string t) {

        int freq[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++) {
            freq[t[i]]--;
        }

        for (int i = 0; i < 256; i++){
            if(freq[i]  != 0)
            return false;
        }

        return true;
    }
};