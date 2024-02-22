#include <iostream>
#include <string.h>
using namespace std;

bool CheckPalindrom(char ch[], int n)
// n -- length of a string
{
    int i = 0;
    int j = n - 1;
 
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{

    char ch[100];
    cin.getline(ch, 100);

    bool ispalindrom = CheckPalindrom(ch, strlen(ch));
    if (ispalindrom)
    {
        cout << "valid Palindrom" << endl;
    }
    else
    {
        cout << "invalid Palindrom";
    }

    return 0;
}