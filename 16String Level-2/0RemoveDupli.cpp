#include <iostream>
#include <string.h>
using namespace std;

string RemoveDuplicate(string s)
{
    string ans = " ";
    int i = 0;

    while (i < s.length())
    {
        // same ans
        // ans  ka rightmost character and string s ka current Character

        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            // pop from ans
            ans.pop_back();
        }

        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;

    string v = RemoveDuplicate(str);
    cout << v;
    return 0;
}