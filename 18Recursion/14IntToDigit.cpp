#include <iostream>
#include <vector>

using namespace std;

void PrintDigit(int num, vector<int> &ans)
{
    // base case
    if (num == 0)
    {
        return;
    }

    // processing
    int digit = num % 10;

    // update
    num = num / 10;

    // recursive call
    PrintDigit(num, ans);

    ans.push_back(digit);
}

int main()
{
    int num = 4321;

    vector<int> ans;
    PrintDigit(num, ans);

    // printVector
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    } 
    return 0;
}