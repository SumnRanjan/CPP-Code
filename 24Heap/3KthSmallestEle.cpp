#include <iostream>
#include <queue>
using namespace std;

int getKthSmallestEle(int arr[], int n, int k)
{
    priority_queue<int> pq;
    // proces first Kth element
    for (int i = 0; i < k; i++)
    {
        int element = arr[i];
        pq.push(element);
    }

    // ab remaning ko process karo
    for (int i = k; i < n; i++)
    {
        int element = arr[i];
        if (element < pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}
int main()
{
    int arr[] = {3, 5, 4, 6, 9, 8, 7};
    int n = 7;
    int k = 5;
    cout << "Kth Smallest Element : " << getKthSmallestEle(arr, n, k);
    return 0;
}