#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n , int target)
{
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;

    while (start<= end)
    {
        if (arr[mid]== target)
        {
            return mid;
        }
        else if (target>arr[mid])
        {
            //right mai jaya ga
            start = mid + 1;
        }
        else if (target<arr[mid])
        {
            //left mai jaya ga
            end = mid - 1;
        }
        //imp mid update 
        mid = (start + end)/2;
        
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int target = 30;

    int ans = BinarySearch (arr, n , target);

    if (ans == -1)
    {
        cout<<" Element not Found "<<endl;
    }
    else
    {
        cout<<"Element Found at Index : "<<ans<<endl;
    }
return 0;
}