#include<iostream>
#include<limits.h>
using namespace std;

int FindMin (int arr[] , int size)
{
    int MINans = INT_MAX;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i]<MINans)
        {
            MINans = arr[i];
        }
        
    }
    return MINans;
}

int main(){
    int arr [] = { 2 , 10 , 55 , 66 , 7};
    int size = 5;

    int minimum = FindMin(arr , size);
    cout<<minimum;
return 0;
}