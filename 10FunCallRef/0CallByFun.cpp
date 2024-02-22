#include <iostream>
using namespace std;

int increment(int n)
{
    n = n + 1;
    return n;
}

int main()
{
    int n;
    cin >> n;

    n = increment(n);
    cout << n;
    return 0;
}