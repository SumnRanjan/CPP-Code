#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int n = 10;

    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Arry is : ";

    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i] * 2<< " ";
    }
    
    
return 0;
}