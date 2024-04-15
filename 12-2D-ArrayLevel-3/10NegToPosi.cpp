#include <iostream>
using namespace std;

void NegtoPos(int arr[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{

    int arr[] = {1, 2, -30, -40, -50, 8, 10};
    int n = 7;

    NegtoPos(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}