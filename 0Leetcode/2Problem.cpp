#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    
    int ans = 0 ;
    int i = 0;
    int count = 0;
    while (n!=0)
    {
        int digit = n % 10;
        
        if (digit== 1 )
        {
            ans = ans + pow(2,i);
        }
        n = n / 10;
        i++;
        if(digit & 1)
        {
            count++;
        }
    }
    cout <<"Number : " <<ans << endl;
    cout<<"Number of 1 :" << count<< endl;
    
    
    return 0;
}
