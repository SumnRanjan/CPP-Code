#include <iostream>
using namespace std;

bool SearchArr(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }

    // recursive call

    bool aagekaans = SearchArr(arr, size, target, index + 1);
    return aagekaans;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    int target = 10;

    cout << "Target Found or Not : " << SearchArr(arr, size, target, index);

    return 0;
}