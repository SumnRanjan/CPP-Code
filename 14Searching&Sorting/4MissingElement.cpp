#include <iostream>
using namespace std;

int MissingElement(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            //right mai jau
            s = mid + 1;
        }
        else
        {
        //store 
            ans = mid;
        //left mai jao
            e = mid - 1;
        }
        //update mid 
        mid = s + (e - s) / 2;
    } 
    //last Element
    if(ans +1 == 0)
    {
        return n + 1;
    }
    return ans + 1;
}

int main()
{

    int arr[] = {1, 2 , 3 , 4 , 5 , 6 , 7 , 8 };
    int n = 9;

    int ans = MissingElement(arr, n);
    cout << "Missing Element : " << ans <<endl;

    return 0;
}