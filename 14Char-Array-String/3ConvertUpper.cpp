//convert to upper case 
#include<iostream>
using namespace std;

void Convert2Uppercase (char ch[] , int n)
{
    int i = 0;
    while (ch[i] != '\0')
    {                                                                                                                                                                                                                                                                                               
        //check if lower case then convert to uppercase
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 'a' + 'A';
        }
        i++;
    }
    
}

int main(){

    char ch[100];
    cin.getline(ch, 100);
    
    Convert2Uppercase(ch , 100);
    cout<<"Uppercase : "<<ch;
    return 0;


return 0;
}