#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = a++; //1   2
    int c = a++;//2   3

    cout << b << endl;
    cout << c << endl;

    return 0;
}

