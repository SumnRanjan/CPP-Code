#include <iostream>
#include <string>
using namespace std;

class Bird
{

public:
    int age, weight;
    int no_leg;
    string color;

    void eat()
    {
        cout << "Bird is Eating" << endl;
    }

    void fly()
    {
        cout << "Bird is flying" << endl;
    }
};

class Sparrow : public Bird
{
public:
    Sparrow(int age, int weight, string color, int no_leg)
    {
        this->age = age;
        this->weight = weight;
        this->color = color;
        this->no_leg = no_leg;
    }
    void grassing()
    {
        cout << "Sparrow is grassing" << endl;
    }

    int getNol()
    {
        return this->no_leg;
    }
};

class Peigon : public Bird
{
public:
    void guttering()
    {
        cout << "Sparrow is guttering" << endl;
    }
};

class Parrot : public Bird
{
public:
    void Speaking()
    {
        cout << "Parrot is Speaking" << endl;
    }
};

int main()
{
    // Sparrow s(1, 2, "Black", 2);
    // cout << s.color << endl;
    // s.eat();
    // s.grassing();

    // Peigon p;
    // p.eat();
    // p.guttering();

    return 0;
}