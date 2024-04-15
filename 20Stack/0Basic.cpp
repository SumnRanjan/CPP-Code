#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);

    // size
    cout << "Size of Stack is :" << st.size() << endl;

    // remove
    st.pop();

    // stack is empty is or not
    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is Non empty" << endl;
    }

    // top element
    cout << st.top() << endl;

    return 0;
}