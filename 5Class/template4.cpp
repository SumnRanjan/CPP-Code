#include<iostream>
using namespace std;
template <typename T>

void disp(T a)
{
    cout<<"Template Element  "<<a<<endl;
}
void disp(int a)
{
    cout<<"Non Template  "<<a<<endl;
}
void disp(double a)
{
    cout<<"Non Template  "<<a<<endl;
}
int main(){
    disp(100);
    disp(11.11);
    disp('c');
    disp("abc");
return 0;
}