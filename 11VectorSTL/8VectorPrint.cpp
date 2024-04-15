#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    cout<<"Printing vector : "<<endl;;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}
//Method 2
void print2(vector<int> v)
{
    cout<<"Printing vector method 2 : "<<endl;
    for ( auto it:v)
    {
        cout<<it<<" ";
    }
    
}

int main()
{
    vector<int> v; 

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    print(v);
    print2(v);

    return 0;
}