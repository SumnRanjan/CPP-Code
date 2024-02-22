#include <iostream>
using namespace std;

void increment(int &k)
{
    k++;
}

int main()
{
    int n;
    cin >> n;

    increment(n);
    cout << n;
    return 0;
}