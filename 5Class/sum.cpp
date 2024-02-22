//celcius
#include <iostream>   
using namespace std;

int main ()
{  
    int num, rem ;
    int sum = 0;
    cout<<"Enter a nmber \n";
    cin>>num;

    while (num!=0)
    {
        rem = num%10;
        sum = sum + rem ;
        num = num/10;
    }

    cout << "sum=" <<sum;
    return 0 ;
    
}