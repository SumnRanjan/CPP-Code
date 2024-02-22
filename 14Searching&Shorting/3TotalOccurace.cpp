// Occurance of a number in a sorted array...
#include <iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    // int mid = s + (e-s) / 2 -- no overflow -- Best Practise
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // store ans
            ans = mid;
            // picha jao
            e = mid - 1;
        }
            else if (target > arr[mid])
            {
                s = mid + 1;
            }
            else if (target < arr[mid])
            {
                e = mid - 1;
            }

            // update mid
            mid = (s + e) / 2;
        }
        return ans;
    }

int LastOccurance(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    // int mid = s + (e-s) / 2 -- no overflow -- Best Practise
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // store ans
            ans = mid;
            // aage jau 
            s = mid + 1;
        }
            else if (target > arr[mid])
            {
                s = mid + 1;
            }
            else if (target < arr[mid])
            {
                e = mid - 1;
            }

            // update mid
            mid = (s + e) / 2;
        }
        return ans;
    }

int TotalOccurance (int arr[] , int n , int target)
{
    int First = FirstOccurance(arr, n , target);
    int last = LastOccurance(arr,n,target);
    int total = last - First + 1;
    return total ;
}

    int main()
    {
        int arr[] = {10, 20, 30, 30, 30, 30, 30, 50, 60};
        int n = 9;
        int target = 30;
       
       int ans = TotalOccurance(arr,n,target);
       cout<<"Total Occurance : " << ans<<endl;

        return 0;
    }