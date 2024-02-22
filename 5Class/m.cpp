// #include <iostream>
// using namespace std;
// int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    int factorial = 1;
//    for (int i = 2; i <= num; i++) {
//       factorial *= i;
//    }
//    std::cout << "Factorial: " << factorial << std::endl;
//    return 0;
// }

#include <bits/stdc++.h>
using namespace std; 
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int size;
    cin>>size;
    
    int arr[size];

    for(int i =0;  i<size ; i++)
    {
      cin>>arr[i];
    }
    
    cout<<endl;

    for(int i = 0;  i<size ; i++)
    {
      if(arr[i] % 2 != 0)
      {
        cout<<arr[i]<<" ";
      }

    }
    
  }
  

  return 0;
}