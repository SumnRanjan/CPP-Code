#include<iostream>
using namespace std;

int main(){

    const int x = 5; // x is constant
    // initialization can be done
    // but we can not re assign a value
    // x = 10;
    cout<<x<<endl;

    // * const with pointers
    //const int * a = new int(2); //const data , non const pointer.
    int const *a = new int(2); //same as line line 13   
    cout<<*a<<endl;
    // *a = 20;  // can't change the content of pointer.
    // cout<<a<<endl;
    int b = 30;
    a = &b; //pointer can be reassign  
    cout<<*a<<endl;


    // const pointer , but non-const data
    int *const a = new int(2);
    cout  <<*a<<endl;

    // *a = 20;
    // cout<<*a<<endl;

    // const pointer , const data
    const int *const a = new int(10);
    cout<<*a<<endl;



return 0;
} 