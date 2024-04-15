#include <iostream>
using namespace std;

// function overloading

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

// Operator Overloading

class Vector
{
    int x,y;
public :

    // Vector(int x, int y)
    //     this->x=x;
    //     this->y=y;
    // }

    // init list

    Vector(int x, int y):x(x),y(y){}

    Vector operator+(const Vector &src)
    {
        // this would point to v1
        // src would be ref to v2

        this->x = this->x + src.x;
        this->y= this->y + src.y;
    }

    Vector operator-(const Vector &src)
    {
        // this would point to v1
        // src would be ref to v2

        this->x = this->x - src.x;
        this->y= this->y - src.y;
    }

    Vector operator++()
    {


        this->x++;
        this->y++;
    }

    void disp()
    {
        cout<<"x : "<<x<< " y : "<<y<<endl;
    }
};

int main()
{
    // cout << add(1, 2) << endl;
    // cout << add(1.2, 2.5) << endl;
    // cout << add(1, 2, 3) << endl;

    Vector v1(2,3);
    Vector v2 (4 , 8);

    // v1+v2;
    // v1-v2;
    ++v1;
    // addtion ans should be store in v1;
    v1.disp();
    

    return 0;
}