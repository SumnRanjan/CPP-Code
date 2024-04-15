#include <iostream>
using namespace std;

class abc
{
    mutable int x; // hume mutable ka use nhi karna hai
    int *y;
    const int z;

public:
    // abc()
    // {
    //     x = 0;
    //     y = new int(0);
    // }

    // ctor : old style
    // abc(int _x, int _y , int _z = 0)
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialization list
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {
        cout<<"in init list "<<endl;
    }
    int getX() const
    {
        x = 20;
        return x;
    }

    void setX(int _val)
    {
        x = _val;
    }

    int getY() const
    {
        return *y;
    }

    void setY(int _val)
    {
        *y = _val;
    }

    int getZ() const
    {
        return z;
    }

};

void PrintABC(const abc &a)
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}
int main()
{
    abc a(1, 2, 3);
    PrintABC(a);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;
    return 0;
}