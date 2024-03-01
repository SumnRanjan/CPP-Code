#include<iostream>
using namespace std;

class Box
{
    int width;
    // ctor
    Box(int _w):width(_w){};
public :



    int getwidth()const
    {
        return width;
    }

    void setwidth (int _val)
    {
        width = _val;
    }

    friend class Boxfactory;

};

class Boxfactory
{
    int count;
public :
    Box getAbox(int _w)
    {
        ++count;
        return Box(_w);
    }
};

int main(){
    // Box b(5);
    // cout<<b.getwidth()<<endl;

    Boxfactory bfact;
    Box b = bfact.getAbox(5);
    cout<<b.getwidth()<<endl;
return 0;
}