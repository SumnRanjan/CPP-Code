#include <iostream>
#include<algorithm>
using namespace std;

void GetZeroOne(int arr[], int n)
{

    int zero = 0;
    int one = 0;
    // stepA: Count 0 and 1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        if (arr[i] == 1)
            one++;
    }

    // M way
    //  int i;
    //  for ( i = 0; i < Zero; i++)
    //  {
    //      arr[i]=0;
    //  }
    //  for ( int j = i; j < n; j++)
    //  {
    //      arr[j]=1;
    //  }

    // Easy Way

    int index = 0;

    while (zero--)
    {
        arr[index] = 0;
        index++;
    }
    while (one--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0};
    int n = 12;

    //GetZeroOne(arr, n);

    std::sort(arr , arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}