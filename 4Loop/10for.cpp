#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5 ; i++)
    {
        for (int j = i; j <= 5 ; j++)
       {
           if (i + j == 10)
           {
             break;
           }
            cout<<i<<"  " << j <<endl;
       }
    }
    
    return 0;
}
