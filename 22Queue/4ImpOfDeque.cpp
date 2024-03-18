#include <iostream>
using namespace std;

class Deque
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushBack(int val)
    {
        // overflow
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // aaha mistake hota h
        {
            cout << "Overflow" << endl;
        }

        // Empty case -> first
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }

        // Circular Nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }

        // normal case
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void pushFront()
    {

        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // aaha mistake hota h
        {
            cout << "Overflow" << endl;
        }

        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }

        else if (front == 0 && rear != size - 1)
        {
            fornt = size - 1;
            arr[front] = val;
        }

        else
        {
            front--;
            arr[front] = val;
        }
    }

    void popFront()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }

        // single element -- important
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // circular nature
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }

        // normal condition
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void popBack()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }

        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }

        else if(rear == 0){
            arr[rear] = -1;
            rear = size - 1;
        }

        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
};

int main()
{

    return 0;
}