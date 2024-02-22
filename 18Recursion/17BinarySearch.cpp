#include <iostream>
using namespace std;

int BinarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] < target)
    {
        return BinarySearch(arr, mid + 1, e, target);
    }

    else
    {
        return BinarySearch(arr, s, mid - 1, target);
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end =  size - 1;

    int target = 40;

    int foundindex = BinarySearch(arr, start , end , target);

    if (foundindex !=1)
    {
        cout<<"Element found at index: "<<foundindex<<endl;
    }

    else{
        cout<<"Element not found "<<endl;
    }
    

    return 0;
}