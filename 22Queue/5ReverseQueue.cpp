#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;

    while (!q.empty())
    {
        int frontele = q.front();
        q.pop();

        s.push(frontele);
    }

    // stack to queue

    while (!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void reverseQueueRecursion(queue<int> &q)
{

    if (q.empty()) return ;

    int temp = q.front();
    q.pop();

    reverseQueueRecursion(q);

    q.push(temp);
}

int main()
{

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueueRecursion(q);

    cout << "Printing Queue : ";

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        cout << element << " ";
    }

    return 0;
}