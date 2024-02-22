#include <iostream>
using namespace std;

int firstOcc(int arr[] , int n , int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s+(e-s)/2;
    int ans = -1;


while(s<=e)
{
    if(arr[mid]==target)
    {
        ans = mid;
        e = mid - 1;
    }
    else if (target>arr[mid])
    {
        s = mid + 1;

    } else if (target < arr[mid]) {
        e = mid - 1;
    }

    mid = s +(e-s)/2;
}
return ans;
}

int main() {

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;


    int ans = firstOcc(arr,  n,  target);
    if(ans==-1)
    {
        cout<<ans;
    }
    else{
        cout<<ans;
    }

    return 0;

}