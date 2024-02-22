// Creating a functional template
#include <iostream>
using namespace std;
template <typename T>

T myadd (T a , T b)
{
    return a+b;
}
int main() {

int a,b,sum1;
cout<<"enter integer a and b \n";
cin>>a>>b;

sum1 = myadd(a,b);
cout<<"the addition of integers is : "<<sum1<<endl;

double x,y,sum2;
cout<<"enter double x and y \n";
cin>>x>>y;

sum2 = myadd (x,y);
cout<<"the addition of double is : "<<sum2<<endl;

    return 0;
}