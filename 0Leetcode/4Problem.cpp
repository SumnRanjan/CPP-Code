#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m , n;
    cin>> n;
    m = n;
    int mask = 0;
    //case 
    if (n==0)
    {
        cout<< 1;
    }
    
    while (m!=0)
    {
        mask = (mask<<1) | 1;
        m = m >> 1;
    }
    
    int ans = (~n) & mask  ;

    cout << ans;
    
    return 0;
}
