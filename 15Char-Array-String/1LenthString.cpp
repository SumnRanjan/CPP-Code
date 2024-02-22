#include <iostream>
#include <string.h>
using namespace std;

int FindLength(char ch[], int size)
{
    // int length = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         // ruk jao
    //         break;
    //     }
    //     else
    //     {
    //         length++;
    //     }
    // }
    // return length;

    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char ch[100];
    // cin>>ch;
    cin.getline(ch, 100);
    int len = FindLength(ch, 100);
    cout << "length Of string : " << len << endl;
    cout << "Length Of str : " << strlen(ch);
    return 0;
}