#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n = 5;

    int value;
    cout<<"The Value of element : "<< endl;
    cin>>value; 

    cout<<"Enter the element"<<endl;

    bool flag = 0;

    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n ; i++)
    {
        if (arr[i] ==  value)
        {
            flag = 1;
        }
        
    }
    if (flag == 1)
        {
            cout<<"match found"<<endl;
        }
    else
        {
            cout<<"not fount";
        }

    
    
return 0;
}