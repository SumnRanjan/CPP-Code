#include<iostream>
using namespace std;

void PrintingRevCount(int n)
{
    //base case
    if (n==1)
    {
        cout<< 1 << " ";
        return;
    }

    
    //recursive call
    PrintingRevCount(n-1);

    //processing
    cout<<n<<" ";

}

int main(){

    PrintingRevCount(6);
return 0;
}