#include <iostream>
using namespace std;

int SearchArr(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }

    // recursive call

    int aagekaans = SearchArr(arr, size, target, index + 1);
    return aagekaans;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    int target = 50;

    cout << "Target Found or Not : " << SearchArr(arr, size, target, index);

    return 0;
}