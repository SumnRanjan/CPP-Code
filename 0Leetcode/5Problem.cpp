#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ans;
    bool t = 0;
    for (int i = 0; i <= 30 ; i++)
    {
        ans = pow(2 , i);
        if (ans == n)
        {
            t = 1;
        }
    }
    if (t == 1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }


    return 0;
}
