#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    cout << "printing vector :" << endl;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
}

int main()
{
    vector<int> v; // Array hi hai...

    // insert
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    print(v);

    cout << endl;

    v.clear();
    v.push_back(50);
    print(v);

    cout << endl;

    v.pop_back();
    print(v);

    return 0;
}