#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index)
{
    if (index >= size)
        return true;

    if (arr[index] > arr[index - 1])
    {
        bool ans = checkSorted(arr, size, index + 1);
        return ans;
    }

    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 70, 60};
    int size = 6;
    int index = 1;

    bool isSorted = checkSorted(arr, size, index);

    if (isSorted)
    {
        cout << "Array is Sorted" << endl;
    }

    else
    {
        cout << "Array is Sorted" << endl;
    }

    return 0;
}