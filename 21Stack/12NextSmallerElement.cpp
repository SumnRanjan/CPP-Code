//https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1
//most imp question 
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

    vector<int>nextSmallerElement(int * arr , int size , vector<int>&ans){
        stack<int>st;
        st.push(0);

        for(int i = size - 1 ; i >= 0 ; i--){
            int curr = arr[i];
            while(st.top() >= curr){
                st.pop();
            }

            ans[i] = st.top();   

            st.push(curr);
        }
        return ans;
    }   

vector<int>prevSmallerElement(int * arr , int size , vector<int>&ans){
    stack<int>st;
    st.push(-1);

    for(int i = 0 ; i < size ; i++){
        int curr = arr[i];
        while(st.top() >= curr){
            st.pop();
        }

        ans[i] = st.top();

        st.push(curr);
    }
    return ans;
}   

int main(){
    
    int arr[] = {10,1,1,6};
    int size = 4;
    vector<int>ans(size);

    ans = nextSmallerElement(arr , size , ans);
    // ans = prevSmallerElement(arr , size , ans);

    for(auto i : ans){
        cout<<i<<" ";
    }


return 0;
}