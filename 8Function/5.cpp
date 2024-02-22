#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c;
    for(int i=2;i<n-1;i++){
        
        c = n%i;
        if(c==0){
            break;
        }
    }

    if(c==0)
    cout<<"not prime";
    else
    cout<<"prime";
}