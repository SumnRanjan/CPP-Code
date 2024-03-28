#include <iostream>
using namespace std;

int climbstairs(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }

    int ans = climbstairs(n - 1) + climbstairs(n - 2);
    return ans;
}

int main()
{
    cout << climbstairs(2) << endl;

    return 0;
}