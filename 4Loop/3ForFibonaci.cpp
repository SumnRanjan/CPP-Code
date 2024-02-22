#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin>>n;
    int a = 0;
    int b = 1;
    int sum =  0 ;

    for (int i = 0 ; i < n ; i++)
    {
        cout<<sum<<" ";
        a = b;
        b = sum;
        sum = a + b;
    }

    

    return 0;
}
