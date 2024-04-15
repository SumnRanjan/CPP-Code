#include <iostream>
#include <limits.h>
using namespace std;

void findmin(int arr[], int size, int index, int &mini)
{
    if (index >= size)
    {
        return;
    }

    // processing

    mini = min(mini, arr[index]);

    // recursive
    findmin(arr, size, index + 1, mini);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    int mini = INT_MAX;
    findmin(arr, size, index, mini);
    cout << "Minimum Number : " << mini;

    return 0;
}