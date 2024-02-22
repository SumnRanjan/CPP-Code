#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxthecut(int n , int x, int y, int z)
{
    if(n==0)
    return 0;

    if(n<0)
    return INT_MIN;

    // maine x length ka 1 segment cut kar liya baki recursion pa chd diya
    int option1 = 1 + maxthecut(n-x , x , y, z);  

    // maine y length ka 1 segment cut kar liya baki recursion pa chd diya
    int option2 = 1 + maxthecut(n-y , x , y , z);

    // maine z length ka 1 segment cut kar liya baki recursion pa chd diya
    int option3 = 1 + maxthecut(n-z , x , y , z);

    int finalans = max(option1 , max(option2 , option3));
    return finalans;
}

int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;

    int finalans = maxthecut(n , x , y, z);
    cout<<finalans<<endl;
return 0;
}