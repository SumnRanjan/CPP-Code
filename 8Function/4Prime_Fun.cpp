#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0; // number is not prime
        }
    }
    return 1; // number is prime
}

int main()
{
    int a;
    cin >> a;

    if (isPrime(a))
    {
        cout << "Number is prime" << endl;
    }

    else
    {
        cout << "Numbr is not Prime" << endl;
    }

    return 0;
}