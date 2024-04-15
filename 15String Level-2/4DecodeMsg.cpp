#include <iostream>
using namespace std;

string DecodeMessage(string key, string message)
{
    // create mapping
    char start = 'a';
    char mapping[280] = {0};

    // for (int i = 0; i < key.length(); i++)
    // {
    //     char ch = key[i];
    //     if (ch != ' ' && mapping[ch] == 0)
    //     {
    //         mapping[ch] = start;
    //         start++;
    //     }
    // }

    // above code and below code is same ....

    for (auto ch : key)
    {
        if (ch != ' ' && mapping[ch] == 0)
        {
            mapping[ch] = start;
            start++;
        }
    }

    // use mapping

    string ans;

    // for (int i = 0; i < message.length(); i++)
    // {
    //     char ch = message[i];
    //     if (ch == ' ')
    //     {
    //         ans.push_back(' ');
    //     }

    //     else
    //     {
    //         char decodechar = mapping[ch];
    //         ans.push_back(decodechar);
    //     }
    // }

    //above code and below code is same---

    for (auto ch : message)
    {
        if (ch == ' ')
        {
            ans.push_back(' ');
        }

        else
        {
            char decodechar = mapping[ch];
            ans.push_back(decodechar);
        }
    }

    return ans;
}

int main()
{
    string key;
    cout<<"Key : "<<endl;
    getline(cin, key);

    string message;
    cout<<"Message encrupted : "<<endl;
    getline(cin, message);

    cout<<"Message Decode : " <<endl;
    string an = DecodeMessage(key , message);
    cout<<an;

    return 0;
}