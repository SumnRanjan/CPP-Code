#include<iostream>
using namespace std;

class abc {
public :
    int x;
    int *y;

    abc (int _x , int _y):x(_x),y(new int (_y)){}

// default dumb copy ctor : it does shallow copy
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

// smart  deep copy
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int (*obj.y);
    }

    void print() const 
    {
        printf("X:%d\nPTR Y:%p\nContent of Y(*y):%d\n\n",x,y,*y);
    }
    
    // dtor

    ~abc()
    {
        delete y;
    }
       
};

int main(){
    // abc a(1,2);
    // a.print();

    // // abc b(a);
    // abc b = a; //call hota hai , copy ctor
    // b.print();
    // *b.y = 20;
    // b.print();

    // a.print();


    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();
return 0;
}