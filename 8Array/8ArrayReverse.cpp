#include<iostream>
using namespace std;

void ReverseArray(int arr[] , int size)
{
    int leftarr = 0;
    int rightarr = size-1;

    while (leftarr<=rightarr)
    {
        swap(arr[leftarr] , arr[rightarr]);
        leftarr++;
        rightarr--;
    }

    //printing reverse 

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    ReverseArray(arr , size);
return 0;
}