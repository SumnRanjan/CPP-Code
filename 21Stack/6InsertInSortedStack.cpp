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

    InsetSorted(st , element);

    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    int element = 0;

    InsetSorted(st, element);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}