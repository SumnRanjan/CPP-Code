#include <iostream>
using namespace std;

template <typename T>

class Number
{
    T num;

public:
    Number(T num) { this->num = num; }
    void disp() { cout << "The number is " << num << endl; }
};

int main()
{
    int a;
    double b;
    cout << "Enter a integer number \n";
    cin >> a;
    Number<int> n1(a);
    cout << "Enter a double number \n";
    cin >> b;
    Number<double> n2(b);

    cout << "Number object1(integer) details \n";
    n1.disp();

    cout << "Number object2(double) details \n";
    n2.disp();

    return 0;
}