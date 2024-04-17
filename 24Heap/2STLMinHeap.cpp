#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // min heap creation
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(100);
    pq.push(70);
    pq.push(90);

    cout << "Top Element : " << pq.top() << endl;
    pq.pop();
    cout << "Top Element : " << pq.top() << endl;

    cout << "Size of Heap : " << pq.size() << endl;
    if (pq.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}