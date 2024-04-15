#include <iostream>
using namespace std;


// Impementation of normal queue
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }

    void push(int val)
    {
        // check full 0(1)
        if (rear == size - 1)
        {
            cout << "Overflow" << endl;
            return;
        }

        else if (front == -1 && rear == -1)
        {
            // first element
            front++;
            rear++;
            arr[rear] = val;
        }

        else
        {
            // normal case
            rear++;
            arr[rear] = val;
        }
    }
    void pop()
    {
        // underflow 0(1)   
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Underflow" << endl;
        }

        // single element ko remove karana hai tho
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        else
        {
            arr[front] = -1;
            front++;
        }
    }

    bool isempty() //0(1)
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    int getSize() //0(1)
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }

        else
        {
            return rear - front + 1;
        }
    }

    int getFront() //0(1)
    {
        if (front == -1)
        {
            cout << "Queue is empty so there is no front element" << endl;
            return -1;
        }

        else
        {
            return arr[front];
        }
    }

    int getrear() //0(1)
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty so there is no back element" << endl;
            return -1;
        }

        else
        {
            return arr[rear];
        }
    }

    void print()
    {
        cout << "Printing Queue : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // creation queue
    Queue q(5);
    q.print();

    q.push(10);
    // q.print();

    q.push(20);
    // q.print();

    q.push(30);
    // q.print();

    q.push(40);
    // q.print();

    q.push(50);
    q.print();

    cout << "Size of Queue : " << q.getSize() << endl;

    q.pop();
    q.print();

    cout << "Size of Queue : " << q.getSize() << endl;
    cout << "Queue is empty or not : " << q.isempty() << endl;

    q.push(100);
    q.print();

    cout<<q.getFront()<<endl;
    cout<<q.getrear()<<endl;

    return 0;
}