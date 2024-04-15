#include <iostream>
#include <vector>
using namespace std;

void store(int arr[], int size, int index, vector<int> &ans)
{
    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }

    // recursive call
    store(arr, size, index + 1, ans);
}

int main()
{

    int arr[] = {11, 20, 31, 40, 50};
    int size = 5;
    int index = 0;

    vector<int> ans;

    store(arr, size, index, ans);

    // printing vector
    for (int num : ans)
    {
        cout << num << " ";
    }
    
    for(int i=0; i<ans.size(); i++) {
    	cout << ans[i] << " ";
    }

    return 0;
}