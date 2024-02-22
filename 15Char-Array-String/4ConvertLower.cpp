//convert to upper case 
#include<iostream>
using namespace std;

void Convert2Lowercase (char ch[] , int n)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        //check if upper case then convert to lowercase
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
        i++;
    }
    
}

int main(){

    char ch[100];
    cin.getline(ch, 100);
    
    Convert2Lowercase(ch , 100);
    cout<<"Lowewrcase : "<<ch;
    return 0;


return 0;
}