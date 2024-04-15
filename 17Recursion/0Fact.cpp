#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // recursive call
    int recursivekaans = factorial(n - 1);

    // processing
    int finalans = n * factorial(n - 1);
    
    return finalans;
}

int main()
{
    int ans = factorial(5);
    cout<<ans;

    return 0;
}