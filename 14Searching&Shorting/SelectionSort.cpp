#include <iostream>
#include <vector>
using namespace std;

void Print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
            swap(arr[i], arr[minindex]);
        }
    }
}
int main()
{
    vector<int> arr = {54, 41, 32, 20, 1};
    SelectionSort(arr);
    Print(arr);
    return 0;
}