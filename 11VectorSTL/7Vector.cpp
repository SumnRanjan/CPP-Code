#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<char>v;

    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    cout<<"Front Element : "<<v[0]<<endl;
    cout<<"Front Element : "<<v.front()<<endl;
    cout<<"last Element : "<<v[v.size() - 1]<<endl;
    cout<<"Front Element : "<<v.back()<<endl;



return 0;
}