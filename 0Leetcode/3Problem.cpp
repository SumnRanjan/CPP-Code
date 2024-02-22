#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int num , digit;
    int rev = 0;
    cin>> num;
    while (num != 0)
    {
        digit = num % 10;
        if((rev > INT_MAX/10 ) || (rev < INT_MIN/10))
        {
          cout<<0;
        }
        rev = rev * 10 + digit;
        num = num/10;
    }
    cout<<rev;
    
    return 0;
}
