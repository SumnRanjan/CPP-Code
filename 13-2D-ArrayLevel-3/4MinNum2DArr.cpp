#include<iostream>
#include<limits.h>
using namespace std;
int MinNum (int arr[][4] , int row , int col )
{
    int MinAns = INT_MAX;
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]< MinAns)
            {
                MinAns = arr[i][j];
            }
            
        }
        
    }
    return MinAns;
}
int main(){

  int arr[3][4] = {
         {1,2,3,4},
         {5,6,7,8},
         {9,10,1,11}
         };

  int row = 3;
  int col = 4;

  int ans = MinNum(arr , row , col);

    cout<<"MinNumber " << ans <<endl;

return 0;
}