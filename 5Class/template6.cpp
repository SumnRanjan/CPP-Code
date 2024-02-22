#include<iostream>
using namespace std;
template <typename T>
void disp(T a)
{
    cout<<"Template Function:"<<a<<endl;
}
template <typename T1 , typename T2>
void disp(T1 a, T2 b)
{
    cout<<"Template Function: "<<a<<" "<<b<<endl;
}
int main(){
disp(10);
disp(10,20);
return 0;
}