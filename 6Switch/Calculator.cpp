#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a ;
    cout<<"Enter the value of A : " <<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of B : " <<endl;
    cin>>b;

    char op;
    cout<<"Enter the Op : " <<endl;
    cin>>op;

    switch (op)
    {
    case '+' : cout<<(a+b)<<endl;
        break;
    
    case '-' : cout<<(a-b)<<endl;
        break;

    case '*' : cout<<(a*b)<<endl;
        break;

    case '/' : cout<<(a/b)<<endl;
        break;

    default: cout<<"Invaild "<<endl;
        break;
    }

    return 0;
}
