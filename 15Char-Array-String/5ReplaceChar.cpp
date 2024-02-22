#include<iostream>
using namespace std;

void ReplaceChar(char ch[] , int n)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] == '@')
        {
            ch[i] = ' ';
        }
        i++;
    }
    
}

int main(){
    char ch[100];
    cin.getline(ch, 100);

    ReplaceChar(ch , 100);
    cout<<"Replace : "<<ch;
    
return 0;
}