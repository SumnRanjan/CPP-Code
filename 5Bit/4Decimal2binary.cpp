#include <iostream>
#include <cmath>
using namespace std;

int decimaltobinary(int n) // division method
{
    int binaryn0 = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryn0 = bit * pow(10, i++) + binaryn0;
        n = n / 2;
    }
    return binaryn0;
}

int decimaltobinary1(int n) // bitwise method
{
    int binaryn0 = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryn0 = bit * pow(10, i++) + binaryn0;
        n = n >> 1;
    }
    return binaryn0;
}

int binarytodecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2 , i++);
        n=n/10;
    }
    return decimal;
}

int main()
{
    // int n;
    // cin>>n;

    // int ans = decimaltobinary1(n);
    // cout<<ans<<endl;

    int n;
    cin >> n;

    int ans = binarytodecimal(n);
    cout<<ans<<endl;

        return 0;
}