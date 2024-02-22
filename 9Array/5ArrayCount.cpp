#include<iostream>
using namespace std;

void CountZeroOne (int arr[] , int size)
{
    int Zerocount = 0;
    int OneCount = 0;
    for ( int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            Zerocount = Zerocount + 1;
        }

        if(arr[i]==1)
        {
            OneCount = OneCount + 1;
        }

    }
    cout<<"no. of zero : "<<Zerocount<<endl;
    cout<<"no. of one : " <<OneCount;
}

int main(){

    int arr[] = {0,1,0,1,1,0,1,1,0,0,1,1,0,1,1} ;
    int size = 15;
    CountZeroOne(arr , size);


return 0;
}
