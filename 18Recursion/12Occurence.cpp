#include <iostream>
using namespace std;

void OccArr(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return ;
    }

    //processing
    if (arr[index] == target)
    {
        cout<<index<<" ";
    }

    // recursive call

    OccArr(arr, size, target, index + 1);
    
}

int main()
{

    int arr[] = {10, 20, 10, 40, 10};
    int size = 5;
    int index = 0;

    int target = 10;

    OccArr(arr, size, target, index);

    return 0;
}