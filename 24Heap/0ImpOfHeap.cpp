#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int capacity;
    int size;

    Heap(int capacity)
    {
        this->arr = new int{capacity};
        this->capacity = capacity;
        // current no. of elment in a heap
        this->size = 0;
    }

    void insert(int val)
    {
        if (size == capacity)
        {
            cout << "Heap OverFlow" << endl;
            return;
        }
        // size increase kar jaega
        size++;
        int index = size;
        arr[index] = val;

        // take th val to its correct position
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }

            else
            {
                break;
            }
        }
    }

    void printingHeap()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    int deleteFromHeap()
    {
        int ans = arr[1];
        // replacement
        arr[1] = arr[size];
        // last element ko delete uski originak position se
        size--;

        int index = 1;
        while (index < size)
        {
            int leftindex = 2 * index;
            int rightindex = 2 * index + 1;

            // find out karna h , sabse bada kon
            int largestkaindex = index;
            // check left child
            if (leftindex <= size && arr[largestkaindex] < arr[leftindex])
            {
                largestkaindex = leftindex;
            }
            if (rightindex <= size && arr[largestkaindex] < arr[rightindex])
            {
                largestkaindex = rightindex;
            }
            // no change
            if (index == largestkaindex)
            {
                break;
            }

            else
            {
                swap(arr[index], arr[largestkaindex]);
                index = largestkaindex;
            }
        }
        return ans;
    }
};

// most important function ---
void heapify(int *arr, int n, int index)
{
    int leftindex = 2 * index;
    int rightindex = 2 * index + 1;
    int largestkaindex = index;

    // teno mai max lao
    if (leftindex <= n && arr[leftindex] > arr[largestkaindex])
    {
        largestkaindex = leftindex;
    }

    if (rightindex <= n && arr[rightindex] > arr[largestkaindex])
    {
        largestkaindex = rightindex;
    }

    if (index != largestkaindex)
    {
        swap(arr[index], arr[largestkaindex]);
        index = largestkaindex;
        heapify(arr, n, index);
    }
}

void bulidHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

void sortHeap(int arr[], int n)  
{
    //tc - n log n
    while (n != 1)
    {
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
}

int main()
{

    int arr[] = {-1, 5, 10, 15, 20, 25, 12};
    int n = 6;
    bulidHeap(arr, 6);

    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortHeap(arr, n);
    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Heap h(20);
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // cout << "Printing the content of heap" << endl;
    // h.printingHeap();
    // int ans = h.deleteFromHeap();
    // cout << endl;
    // cout << "answer : " << ans << endl;
    // cout << "Printing the content of heap" << endl;
    // h.printingHeap();

    return 0;
}