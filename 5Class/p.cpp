#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,o;
        cin>>n>>m>>o; 
        
        if(m>n && n>o )
        cout<<n<<endl;
        
        else if(n>m && m>o )
        cout<<m<<endl;
        
        else
        cout<<o<<endl;
        
            
    }
    
	return 0;
}
