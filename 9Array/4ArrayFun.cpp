#include<iostream>
using namespace std;

void Printing_Array (int arr[] , int size)
{

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool lenearSearch (int arr[] , int size , int target )
{
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            //found
            return true;
        }
    }
    //not found
    return false;
}


int main(){
    
    int arr[5] = {1, 2, 3, 4, 5} ;
    int size = 5;
    int target = 11;
   // Printing_Array(arr , size);

   int ans = lenearSearch(arr , size , target);

   if (ans == 1)
   {
        cout<<"target found";
   }
   else
   {
        cout<<"NOT found";
   }
   

return 0;
}