#include<iostream>
#include <string>
using namespace std;

class Student{

private :
    string gf;
    
public :
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v; 

    //ctor : Default Ctor : assigns garbage value
    Student()
    {
        cout<<"ctor is called"<<endl;
    }

    //Paremeterized ctor
    //we can use this-> if we want to use same name ..
    Student(int id , int age , bool present , string name , int nos , string gf)
    {
        this->id = id ;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->v = new int(10);

        cout<<"Paremeterized ctor is called"<<endl;
    }

    //Paremeterized ctor
    Student(int id , int age , bool present , string name , int nos)
    {
        this->id = id ;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout<<"Paremeterized ctor is called without gf"<<endl;
    }

    // copy ctor : 
    Student (const Student &srcobj)
    {
        cout<<"Copy Ctor is called"<<endl;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->gf = srcobj.gf;
        this->nos = srcobj.nos;
        this->present = srcobj.present;
        this->id = srcobj.id;
    }

    //getter /setter
    string getGFName()
    {
        return gf;
        // return this->gf;
    }

    void setGFName(string gf)
    {
        this->gf = gf;
    }


    void study()
    {
        cout<<"studing"<<endl;
    }

    void sleep()
    {
        cout<<"sleeping"<<endl;
    }

    void bunk()
    {
        cout<<"bunking"<<endl;
    }

    // dtor 

    ~Student()
    {
        cout<<"Dtor is called"<<endl;
        delete v;
    }

private:
    void gfchatting()
    {
        cout<<"Chatting"<<endl;
    }

};


int main(){
    // cout<<sizeof(Student)<<endl;
    // Student s1;
    
    // Student s2(1 , 12 , 0 , "sumit" , 1 , "priti");
    // cout<<s2.age<<endl;
    // cout<<s2.name<<endl;

    // Student s3(2,15,1,"love",5);
    // cout<<s3.name<<endl;

    // //allocation on hep
    // Student *s4 = new Student(3,19,0,"chintu",5);
    // cout<<s4->age<<endl;
    // cout<<(*s4).name<<endl;

    // delete s4; //no leak 

    // s1.name ="Suman";
    // s1.age = 12;
    // s1.id = 1;
    // s1.nos = 5;
    // s1.present = 0;

    // Student s2;
    // s2.name ="goli";
    // s2.age = 11;
    // s2.id = 2;
    // s2.nos = 1;
    // s2.present = 0;

    //  copy ctor

    // Student a1(1,12,1,"chotu",1,"butki");
    // Student a2 = a1; //here copy ctor is called
    // //Student a2(a1); //another way to call copy ctor
    // //a2 = a1; //ctor called nahi hoga..

    // cout<<a1.name<<endl;
    // cout<<a2.name<<endl;  

    // Dtor  
    // { 
    // Student a1(1,12,1,"chotu",1,"butki");
    // cout<<a1.name<<endl;
    // }
    // Student a2;

    // access and change private member
    Student a1(1,12,1,"chotu",1,"butki");
    cout<<a1.name<<endl;

    cout<<a1.getGFName()<<endl;

    a1.setGFName("love");
    cout<<a1.getGFName()<<endl;
return 0;
}