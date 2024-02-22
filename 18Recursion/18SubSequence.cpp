#include <iostream>
#include <string>
#include<vector>
using namespace std;

void findSubSequence(string str, string output, int index , vector<string>&ans)
{
    // base case
    if (index >= str.length())
    {
        // ans jo hai wo output string mai bulid ho chuka hai
        // print kardo
        // cout << "->" << output << endl;
        ans.push_back(output);
        return;
    }

    char ch = str[index];

    // jab hum phele include kara ga tho ye code hoga

    // include
    output.push_back(ch);
    findSubSequence(str, output, index + 1 , ans);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    // exclude
    output.pop_back();
    findSubSequence(str, output, index + 1 , ans);


    // jab hum exclude phele kara tho ye code hoga....

    // // exclude
    // findSubSequence(str , output , index + 1 , ans);

    // // include
    // // output string mai ch character ko include kar do
    // output.push_back(ch);
    // findSubSequence(str , output , index+1 , ans);
}

int main()
{
    string str = "abc";
    string output;
    int index = 0;
    vector<string>ans;
    findSubSequence(str, output, index , ans);

    cout<<"Printing SubSequence in Vector : "<<endl;
    for(string s: ans){
        cout<<"->"<< s << endl;
    }
    return 0;
}