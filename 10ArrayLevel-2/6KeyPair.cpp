#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool KeyPair(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool KeyPair2Pointer(int arr[] , int n , int target)
{
    
    int s = 0;
    int e = n -1;

    while (s<e)
    {
        if (arr[s]+arr[e]==target)
        {
            return true;
        }

        else if(arr[s]+arr[e] > target)
        {
            e--;
        }

        else
        {
            s++;
        }
        
    }
    return false;
}

int main()
{
    int arr[] = { 1,
                  4,
                  45,
                  6,
                  10,
                  8 }; 
    int n = 6;
    int target = 55
    
    ;
    sort(arr,arr+n);
    bool ans = KeyPair2Pointer(arr, n, target);

    if (ans == 0)
        cout << "not found" << endl;

    else
        cout << "found" << endl;

    return 0;
}