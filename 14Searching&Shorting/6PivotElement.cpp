#include<iostream>
using namespace std;

int findpivot(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (s==e)
        return s;

        if(arr[mid] > arr[mid + 1])
        return mid;

        else if(arr[mid] < arr[mid-1])
        return mid - 1;

        else if(arr[s] > arr[mid])
        e = mid - 1;

        else
        s = mid + 1;

        mid = s + (e-s)/2;
        
    }
    return -1;
    
}

int main(){
    int arr[] ={10  , 3 , 4 , 6 , 8};
    int n = 8;

    int ans = findpivot(arr, n);
    cout<<ans<<endl;
return 0;
}