#include <iostream>
using namespace std;

// void solve(int *arr, int size)
// {
//     // cout<<sizeof(arr);
//     // cout << "Inside solve function arr : " << arr << endl;
//     // cout << "Inside solve function &arr : " << &arr << endl;
//     *arr = *arr + 1;
// }

void solve(int* &p) {
	p = p + 1;
}

int main()
{

    int a = 5;
	int* p = &a;

	cout << "p: " << p << endl;
	cout << "&p : " << &p << endl;
	cout << "*p: " << *p << endl;
	solve(p);
	cout << "p: " << p << endl;
	cout << "&p : " << &p << endl;
	cout << "*p: " << *p << endl;

    // int arr[5] = {10, 20, 30, 40, 50};
    // // cout<<sizeof(arr)<<endl;
    // solve(arr, 5);

    // for (int i = 0 ; i<5 ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // cout << "Inside main function arr : " << arr << endl;
    // cout << "Inside main function &arr : " << &arr << endl;

    // int arr[5] = {1,2,3,4,5};

    // //pointer to an arry
    // int * ptr = arr;

    // //pointer to an arry
    // int (*ptr1)[5] = &arr;

    // cout<<(*ptr1)[0]<<endl;

    // char ch[10] = "Babbar";
    // char * cptr = &ch;
    return 0;
}