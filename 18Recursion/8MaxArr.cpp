#include <iostream>
#include <limits.h>
using namespace std;

void findmax(int arr[], int size, int index, int &maxi)
{
    if (index >= size)
    {
        return;
    }

    // processing

    maxi = max(maxi, arr[index]);

    // recursive
    findmax(arr, size, index + 1, maxi);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    int maxi = INT_MIN;
    findmax(arr, size, index, maxi);
    cout << "Maximum Number : " << maxi;

    return 0;
}