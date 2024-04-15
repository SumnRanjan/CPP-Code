#include<iostream>
using namespace std;

string RemoveOccurence(string s , string part)
{
    while (s.find(part) != string::npos)
    {
        //if inside loop that means str part in loop

        s.erase(s.find(part) , part.length());
    }
    return s;
    
}

int main(){

    string str;
    cin>>str;

    string part;
    cin>>part;

    string ans = RemoveOccurence(str , part);
    cout<<ans;

return 0;
}