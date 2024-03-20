// https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    string A = "ababc";
    queue<char> q;
    int freq[26] = {0};

    for (int i = 0; i < A.length(); i++)
    {
        char ch = A[i];
        freq[ch - 'a']++;
        q.push(ch);

        // answer find karo
        while (!q.empty())
        {
            char frontchar = q.front();
            if (freq[frontchar - 'a'] > 1)
            {
                // ye tho ans nhi hai
                q.pop();
            }

            else
            {
                cout << frontchar << "->";
                break;
            }
        }b 

        if (q.empty())
        {
            cout << "#"<<"->";
        }
    }

    return 0;
}