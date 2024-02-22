#include<iostream>
using namespace std;
template <typename T , int size >

class myarry{
    T arr[size];
    public :
    void read() {for(int i = 0 ; i<size ; i++) cin>>arr[i];}
    void disp() {for(int i = 0 ; i<size ; i++) cout<<arr[i]<<" ";}
};
int main(){
    myarry<int ,5> a1;
    a1.read();
    a1.disp();
    myarry<char ,5> a2;
    a2.read();
    a2.disp();


return 0;
}