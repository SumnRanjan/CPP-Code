//celcius
#include <iostream>   
using namespace std;

int main ()
{  
    int num, digit ;
    int rev = 0;
    cout<<"Enter a nmber : ";
    cin>>num;
    int prod = 1;
    int sum = 0;
    int result ;
    while (num!=0)
    {
        digit = num%10;
        rev = rev * 10 + digit;
        num = num/10;
        prod = prod * digit;
        sum = sum + digit;
    }
    result = prod - sum ;
    cout << "Reverse of given no. is = " <<rev <<endl;
    cout<< "Product : "<< prod <<endl;
    cout<<"Sum : " << sum << endl;
    cout<<"Result : " << result ;
    return 0 ;
    
}
