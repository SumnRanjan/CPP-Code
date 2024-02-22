#include<iostream>
using namespace std;

long int fibonacii(long int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    int ans = fibonacii(n-1) + fibonacii(n-2);

    return ans;
}

int main(){
    long int n;
    cin>>n;
cout<<fibonacii(n)<<endl;
return 0;
}