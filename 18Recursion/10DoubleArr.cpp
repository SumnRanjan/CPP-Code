#include <iostream>
using namespace std;

void PrintArr(int arr[] , int size , int index )
{
    if(index >= size)
    return;

    //processing
    cout<<arr[index]<<" ";

    //recursive call
    PrintArr(arr, size , index + 1);
}

void DoubleArr(int arr[], int size, int index)
{
    if (index >= size)
    {
        return;
    }

    // processing

    arr[index] =  2 * arr[index];

    DoubleArr(arr, size, index + 1);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    
    DoubleArr(arr, size, index);

    PrintArr(arr,size,index);

    

    return 0;
}