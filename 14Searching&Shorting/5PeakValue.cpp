//852 - Leet code
#include<iostream>
using namespace std;

int peakMountain(int arr[] , int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while (s < e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return arr[mid];
    
}

int main(){
    int arr[] = {10,20,50,60,40,30};
    int n = 5;

    int ans = peakMountain(arr,n);
    cout<<ans<<endl;

return 0;
}