#include<iostream>
using namespace std;

template <typename T>

T findMax(T a, T b)
{
    return (a>b)?a:b;
}

int main(){
    int a,b; 
    double x,y;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    cout<<"enter two double"<<endl;
    cin>>x>>y;

    cout<<"the max of two integer\n"<<findMax(a,b)<<endl;
    cout<<"the max of two double\n"<<findMax(x,y)<<endl;
return 0;
}