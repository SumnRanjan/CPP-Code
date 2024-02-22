// write a cpp program to create a pointer to an array and print the address and value at pointer
#include <iostream>
using namespace std;
bool binarysearch(int *arr, int s, int e, int key)
{

    // base case
    // element not found
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int s = 0;
    int e = 5;
    int key = 18;

    cout << "present or not : " << binarysearch(arr, s, e, key) << endl;
    return 0;
}