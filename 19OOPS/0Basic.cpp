#include <iostream>
using namespace std;

class Animal
{
    // state and properties
private:
    int weight;

public:
    int age;
    string type;

    // default constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "constructor called" << endl;
    }

    // Parameterised Constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Parameterised Constructor called" << endl;
    }

    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parameterised Constructor 2 called" << endl;
    }

    Animal(int age, int weight, string type)
    {
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout << "Parameterised Constructor 3 called" << endl;
    }

    // Copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout << "inside copy constructor" << endl;
    }

    // Function or behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    int GetWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    // Destructor
    ~Animal()
    {
        cout << "i am inside the distructor" << endl;
    }
};

int main()
{
    // staic memory allocation

    // object creation
    // Animal Ramesh;
    // Ramesh.age = 12;
    // Ramesh.type = "lion";
    // cout << "age of ramesh : " << Ramesh.age << endl;
    // cout << "type of ramesh : " << Ramesh.type << endl;

    // Ramesh.eat();
    // Ramesh.sleep();

    // to access private member we use getter and setter
    //  Ramesh.setWeight(101);
    //  cout<<"Weight : "<<Ramesh.GetWeight()<<endl;

    // DYANAMIC MEMORY ALLOCATION
    // Animal* suresh = new Animal;

    // (*suresh).age = 15;
    // (*suresh).type = "billi";

    // // alternate dynamic
    // suresh -> age = 17;
    // suresh->type = "baby";

    // suresh->eat();
    // suresh->sleep();

    // Default Constructor
    //  Animal a;
    //  Animal * b = new Animal();

    // Parameterised Constructor
    //  Animal a(10);
    //  Animal * b = new Animal(100 , 10 , "love");

    // object copy
    //  Animal c = a;
    //  Animal d(*b);
    //  Animal Animal1(c);

    // destructor
    Animal a;
    a.age = 5;

    Animal *b = new Animal();
    b->age = 45;

    // manually
    delete b;    
    return 0;
}