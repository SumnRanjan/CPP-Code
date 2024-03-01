#include<iostream>
using namespace std;


class Person
{
public :
    void Walk()
    {
        cout<<"Walking.."<<endl;
    }
};


class Teacher : virtual public Person
{ 
public :
    void teach()
    {
        cout<<"Teaching.."<<endl;
    }
};

class Resercher :virtual public Person

{
public :
    void Reserch()
    {
        cout<<"Reserching.."<<endl;
    }
};

class Professor : public Teacher , public Resercher ,  virtual public Person
{
public :
    void Bore()
    {
        cout<<"Boring.."<<endl;
    }
};
int main(){

    Professor p;
    //p.Bore();
    
    // Diamond problem
    // solution 1 :scope Resolution
    // p.Teacher::Walk();
    // p.Resercher::Walk(); 

    // solution 2: virtual
    p.Walk(); 
return 0;
}