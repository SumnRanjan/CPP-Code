#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n = 5;

    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Arry is : ";

    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i] << " ";
    }
    
    
return 0;
}