//creating a class with multiple parameter
#include<iostream>
using namespace std;
template<typename T1 , typename T2>

class A 
{
    T1 a;
    T2 b;   
    public:
    A(T1 a, T2 b)
    {this->a=a; this->b=b;}
    void disp(){cout<<"a = "<<a<<"\n"<<"b = "<<b;}

};

int main(){
    A<int,float> obj(10,11.11);
    obj.disp();
return 0;
}