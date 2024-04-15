#include<iostream>
#include<limits.h>
using namespace std;

int FindMax (int arr[] , int size)
{
    int Maxans = INT_MIN;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i]>Maxans)
        {
            Maxans = arr[i];
        }
        
    }
    return Maxans;
}

int main(){
    int arr [] = { 2 , 10 , 55 , 66 , 7};
    int size = 5;

    int max = FindMax(arr , size);
    cout<<max;
return 0;
}





// int findmax(int arr , int n)
// {
//     int max = INT_MIN
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }