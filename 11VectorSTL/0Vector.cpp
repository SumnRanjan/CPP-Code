#include<iostream>
using namespace std;
void fun(int arr[], int n){
    cout<<"Array is : " ;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){

    //static
    // int arr [5]={1,2,3,4,5};
    // int n = 5;
    // fun(arr , n);

    //dyanamic
    int n ;
    cin>> n ;

    int *arr = new  int [n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    fun(arr , n);
    

return 0;
}