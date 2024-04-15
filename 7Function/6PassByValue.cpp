#include<iostream>
using namespace std;

void dummy (int n)
{
    n++;
    cout<<"n is : "<< n <<endl;
}
int main(){
    int num;
    cin>>num;

    dummy(num);
    
    cout << "Number is "<<num;

return 0;
}