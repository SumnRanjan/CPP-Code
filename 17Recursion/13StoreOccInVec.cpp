 #include <iostream>
#include <vector>
using namespace std;

void OccArrVec(int arr[], int size, int target, int index, vector<int> &s)
{
    if (index >= size)
    {
        return;
    }

    // processing
    if (arr[index] == target)
    {
        s.push_back(index);
    }

    // recursive call

    OccArrVec(arr, size, target, index + 1, s);
}

int main()
{

    int arr[] = {10, 20, 10, 40, 10};
    int size = 5;
    int index = 0;

    int target = 10;

    vector<int> ans;

    OccArrVec(arr, size, target, index, ans);

    // printing Vector

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}