#include <iostream>
#include <unordered_map>
using namespace std;
//when we use order map we get sorted value
void countCharacters(unordered_map<char, int> & mapping , string str){
    for(auto ch : str){
        mapping[ch]++;
    }
}

int main()
{
    string str = "lovebabber";
    unordered_map<char, int> mapping;
    countCharacters(mapping , str);


    for (auto i: mapping){
        cout<<i.first<< "->" <<i.second<<endl;
    }
    
}