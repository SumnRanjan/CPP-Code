#include<iostream>
#include<limits.h>
using namespace std;
int MaxNum (int arr[][4] , int row , int col )
{
    int MaxAns = INT_MIN;
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]> MaxAns)
            {
                MaxAns = arr[i][j];
            } 
            
        }
        
    }
    return MaxAns;
}
int main(){

  int arr[3][4] = {
         {1,2,3,4},
         {5,6,7,8},
         {9,10,1,11}
         };

  int row = 3;
  int col = 4;

  int ans = MaxNum(arr , row , col);

    cout<<"MaxNumber " << ans <<endl;

return 0;
}