#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void Push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "OVERFLOW" << endl;
        }

        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void Push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "OVERFLOW" << endl;
        }

        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void Pop1()
    {
        if (top1 == -1)
        {
            cout << "UNDERFLOW" << endl;
        }

        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout << "UNDERFLOW" << endl;
        }

        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void Print()
    {
        cout << endl;
        cout << "Top1 : " << top1 << endl;
        cout << "Top2 : " << top2 << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(6);
    st.Print();

    st.Push1(10);
    st.Print();

    st.Push1(20);
    st.Print();

    st.Push2(100);
    st.Print();

    st.Push2(200);
    st.Print();

    st.Push2(300);
    st.Print();

    st.Push2(700);
    st.Print();

    st.Push1(30);

    st.Pop1();
    st.Print();

    st.Pop1();
    st.Print();

    st.Pop1();
    return 0;
}