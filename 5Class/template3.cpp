#include<iostream>
using namespace std;
template <typename T1, typename T2>

T1 myadd (T1 a , T2 b)
{
    return a+b;
}

int main(){
    double a; int b;
    cout<<"Enter a double number \n"; cin>>a;
    cout<<"Enter a integer number \n"; cin>>b;

    cout<<"The addition of double a = "<<a<<" with integer b "<< b<<" is :  "<< myadd(a,b);
return 0;
}
