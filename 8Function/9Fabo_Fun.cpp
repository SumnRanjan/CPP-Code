#include<iostream>
using namespace std;

void fab (int n)
{
    int a = 0;
    int b = 1;
    int sum = 0 ;

    for (int i = 0; i < n ; i++)
    {
        cout<< sum <<" ";
        a = b;
        b = sum;
        sum = a + b;
    } 
}

int main(){
     
    int n;
    cin>>n;
    fab(n);
return 0;
}