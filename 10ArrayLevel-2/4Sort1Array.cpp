
#include <iostream>
using namespace std;

void GetZeroOne(int arr[], int n)
{

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        swap(arr[left] , arr[right]);
        left++;
        right--;
    }

}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0};
    int n = 12;

    GetZeroOne(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}