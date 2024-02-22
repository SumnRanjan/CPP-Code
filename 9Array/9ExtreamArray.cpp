#include <iostream>
using namespace std;

void ExtremPrint(int arr[], int size)
{
    int leftarr = 0;
    int rightarr = size - 1;

    while (leftarr <= rightarr)
    {
        if (leftarr == rightarr)
        {
            cout << arr[leftarr] << " ";
        }

        else
        {
            cout << arr[leftarr] << " ";
            cout << arr[rightarr] << " ";
        }

        leftarr++;
        rightarr--;
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    ExtremPrint(arr, size);
    return 0;
}