#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    //pointer to an arry
    int * ptr = arr;

    //pointer to an arry
    int (*ptr1)[5] = &arr;

    cout<<(*ptr1)[0]<<endl;


    // char ch[10] = "Babbar";
    // char * cptr = &ch;
return 0;
}