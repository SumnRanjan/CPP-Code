#include <iostream>
using namespace std;

int expand(string s, int i, int j)
{
    int count = 0;

    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int CountSubstring(string s)
{
    int totalcount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        // odd
        int j = i;
        int oddkaans = expand(s, i, j);

        // even
         j = i + 1;
        int evenkaans = expand(s, i, j);
        totalcount = totalcount + oddkaans + evenkaans;
    }
    return totalcount;
}

int main()
{
    string str;
    cin >> str;

    int ans = CountSubstring(str);
    cout << ans;
    return 0;
}