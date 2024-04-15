#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void Push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is overflow" << endl;
            return;
        }

        else
        {
            top++;
            arr[top] = data;
        }
    }

    void Pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        else
        {
            top--;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
           return false;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    void Print()
    {

        cout << "Top : " << top << endl;
        cout << "Top Element : " << getTop() << endl;
        cout << "Stack : ";

        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << endl;
    }
};

int main()
{
    // creation
    Stack st(8);
    st.Push(10);
    // st.Print();

    st.Push(20);
    st.Print();
 
    cout << "Top element : " << st.getTop() << endl;
    cout << "Size of stack : " << st.getSize() << endl;

    st.Pop();
    st.Pop();

    if (st.isempty())
    {
        cout << "Stack is empty " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }

    // st.Pop();
    // st.Print();

    // st.Pop();
    // st.Print();

    // st.Pop();
    // st.Print();

    return 0;
}