#include <iostream>
using namespace std;

int sum(int *arr, int size)
{
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];


    int sum1 = arr[0] + sum(arr + 1, size - 1);
    return sum1;
}

int main()
{
    int arr[] = {10, 2, 30, 4, 5};
    int size = 5;
    int sum1 = sum(arr,size);
    cout<<sum1<<endl;
    return 0;
}