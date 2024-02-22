#include <iostream>
#include <string.h>
using namespace std;

void ReverseString(char ch[] , int n)
{
    int i = 0;
    int j = n - 1;

    while (i<=j)
    {
        swap(ch[i] , ch[j]);
        i++;
        j--;
    }
    
}

int main()
{
    char ch[100];
    // cin>>ch;
    cin.getline(ch, 100);

    ReverseString(ch, strlen(ch));
    cout<<"Reverse String : "<<ch<<endl;

    return 0;
}