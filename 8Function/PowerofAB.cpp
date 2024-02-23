#include<iostream>
using namespace std;

int slowpower(int a , int b){
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans*a;
    }
    return ans;
}

int fastpower(int a , int b){
    int ans = 1;
    while (b>0)
    {
        if (b&1)
        {
            ans = ans*a;
        }
        a= a*a;
        b=b/2;
    }
    return ans;
}
int main(){
    int a , b;
    cin>>a>>b;
    
    int ans = slowpower(a,b);
    int ans1 = fastpower(a,b);
    cout<<ans<<" "<<ans1;
return 0;
}