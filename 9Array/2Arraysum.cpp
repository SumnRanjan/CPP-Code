#include <iostream>
using namespace std;

bool isprime(int x)
{
    if(x==2)
    return true;
    
    for (int i = 2; i*i <= x; i++)
    {
        if(x%i!=0)
        return true;
    }
    return false; 
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    
    cout<<sum<<endl;

    
    int p = 0;   

    if (isprime(sum))
    {
        cout<<0<<endl;
    }
    else
    {
        while (!isprime(sum))
        {
            sum++;
            p++;
        }
        
        cout<<p<<endl;
    }
    
    
    
    

    return 0;
}