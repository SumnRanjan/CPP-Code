#include <iostream>
#include <stack>
using namespace std;

void InsetSorted(stack<int> &st, int &element)
{
    if (st.empty() || element > st.top())
    {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    InsetSorted(st, element);

    st.push(temp);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();

    sortStack(st);

    InsetSorted(st ,temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(5);
    st.push(30);
    st.push(9);
    st.push(3);

    sortStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}