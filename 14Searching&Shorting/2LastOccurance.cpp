// First Occurance of a number in a sorted array...
#include <iostream>
using namespace std;

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

    int main()
    {
        int arr[] = {10, 20, 30, 30, 30, 30, 30, 40, 50};
        int n = 9;
        int target = 30;

        int ans = LastOccurance(arr, n, target);
        if (ans == -1)
        {
            cout << " Element not Found " << endl;
        }
        else
        {
            cout << "Last Occurance at Index : " << ans << endl;
        }

        return 0;
    }