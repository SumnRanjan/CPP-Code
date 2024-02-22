#include <iostream>
using namespace std;

bool CheckPalindron(string s , int i , int j)
{
    // int i = 0;
    // int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }

        else
        {
            return false;
        }
    }
    return true;
}

bool ValidPalindrom(string s )
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            // s[i]!=s[j]
            // 1 removal allowed
            // check plaindrome for remaining string after removal

            // i th character --> removal
            bool ans1 = CheckPalindron(s , i + 1 , j);

            // j th character --> removal
            bool ans2 = CheckPalindron(s , i , j-1) ;

            return ans1 || ans2;
        }
    }
    // aaha tak pahuche ho tho
    // palindrom hai
    return true;
}

int main()
{
    string str;
    cin >> str;
    
    bool ans = ValidPalindrom(str );

    if (ans == 1)
    {
        cout<<"Valid Palindrom"<<endl;
    }

    else
    {
        cout<<"Invalid Palindrom"<<endl;
    }
    
    return 0;
}