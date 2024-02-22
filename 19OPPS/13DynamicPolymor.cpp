#include<iostream>
using namespace std;
// without virtual early binding, static binding
// with virtual late binding, dynamic binding

class Animal
{
public :    
    virtual  void sound ()
    {
        cout<<"Animal making sound"<<endl;
    }

    virtual ~Animal ()
    {
        cout<<"~Animal Dtor"<<endl;
    }
};

class Dog : public Animal
{
    void sound() override
    {
        cout<<"Dog Barking"<<endl;
    }

    ~Dog ()
    {
        cout<<"~Dog Dtor"<<endl;
    }
};

class Cat : public Animal
{
    void sound() override
    {
        cout<<"Cat Mewing"<<endl;
    }


    ~Cat ()
    {
        cout<<"~Cat Dtor"<<endl;
    }
};

class Parrot : public Animal
{
    void sound() override
    {
        cout<<"Parrot Mithu"<<endl;
    }

    ~Parrot ()
    {
        cout<<"~Parrot Dtor"<<endl;
    }
};

void sound (Animal *animal)
{
   animal->sound();    //polymorphic 
   //animal->sound is behaving as per required object allocated at runtime  
}

int main(){

    Animal *animal = new Dog();
    sound(animal);

    // animal = new Cat();
    // sound(animal);

    // animal = new Parrot();
    // sound(animal);

    delete animal;
return 0;
}