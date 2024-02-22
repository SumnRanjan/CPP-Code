#include <iostream>
using namespace std;

void order(int arr[] , int n)
{
    int i = 0;
    int s = 0;
    int e = n-1;

    while (i<=e)
    {
        if (arr[i]==0)
        {
            swap(arr[i],arr[s]);
            s++;
            i++;
        }
        else if (arr[i]==2){
            swap(arr[i] , arr[e]);
            e--;
        }
        else {
            i++;
        }
        
        
    }
    
}

int main()
{

    int arr[] = {1, 2, 0, 2, 0, 1};
    int n = 6;

    order(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}