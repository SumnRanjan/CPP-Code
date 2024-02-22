#include <iostream>
using namespace std;

class abc
{
public:
    int x, y;
 
    static void print() 
    {
        //no this pointer accessible 
        printf("I am in static %s\n" ,__FUNCTION__);
    }
};

int main()
{

    abc obj1;
    abc::print();
    obj1.print();

    abc::print();
    abc::print();
    return 0;
}