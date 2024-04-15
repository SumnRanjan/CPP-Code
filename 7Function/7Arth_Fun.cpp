#include<iostream>
using namespace std;

int Arth(int n)
{
    int Ap = 3 * n + 7;
    return Ap;
}


int main(){
    int n; 
    cin>>n;

    int ans =Arth(n);
    cout<< "Answer " << ans; 
return 0;
}