#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
    cout << "printing vector :" << endl;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
}

int main(){
 // vector initialization
  vector<int>arr; // default with no data, 0 size
  vector<int>arr2(5, -1); // init with n size with specific data
  // arr2.push_back(50);
  // print(arr2);

  vector<int>arr3 = {1,2,3,4,5};
  // arr3.pop_back();
  // print(arr3);

  vector<int>arr4{1,2,3,4,5};
  // print(arr4);

  // how to copy vector
  vector<int> arr5 = {1,2,3,4,5};
  vector<int>arr6(arr5);
  print(arr6);

return 0;
}