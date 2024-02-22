#include<iostream> 
using namespace std;

int GetUniqueNum(int arr[] , int size )
{
    int ans = 0;
    for (int i = 0; i < size ; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr [] = {2,10,11,13,2,10,15,13,15};
    int size = 9;    
    int finalans = GetUniqueNum(arr , size );
    cout<<finalans;


    
return 0;
}