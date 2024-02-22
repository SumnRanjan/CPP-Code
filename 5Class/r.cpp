#include<iostream>
using namespace std;

int firstocc(int arr[] , int n , int target)
{
    int ans = -1;
    for (int i = 0 ; i < n; i++)
    {
        if (arr[i]==target)
        {
            ans=i;
            break;
        }
        
    }
    return ans;
    

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;

    cout<<firstocc(arr,n,target);

return 0;
}