// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class myexp : public exception
{
public:
    const char *what() const throw()
    {
        return "exce : Divide number zero";
    }
};
int main()
{
    myexp e;
    int a, b, res;
    cout << "Enter a and b \n";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw e;
            cout<<"Result is "<<a/b<<endl;
    }

    catch (myexp &e)
    {
        cout << e.what();
    }

    return 0;
}