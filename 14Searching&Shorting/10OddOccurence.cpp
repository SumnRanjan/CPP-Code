#include <iostream>
using namespace std;

int oddOccurence(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
            return s;

        if (mid & 1)
        {
            if (mid - 1 >= 0 && arr[mid - 1] == arr[mid])
            {
                s = mid + 1;
            }

            else
            {
                e = mid - 1;
            }
        }

        else
        {

            if (mid + 1 > n && arr[mid ] == arr[mid+1])
            {
                s = mid + 2;
            }

            else
            {
                e = mid;
            }
        }
        mid = s + (e - s) / 2;

    }
    return -1;
}

int main()
{
    int arr[] = {10,
                 10,
                 5,
                 5,
                 6,
                 6,
                 7,
                 9,
                 9,
                 7,
                 7,
                 8,
                 8};
    int n = 13;

    int ansindex = oddOccurence(arr, n);
    cout << arr[ansindex];

    return 0;
}