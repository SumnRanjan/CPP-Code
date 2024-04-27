#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

// class Graph
// {
// public:
//     unordered_map<int, list<int>> adjlist;
//     void addEdge(int u, int v, bool direction)
//     {
//         // direction -> 0 -> undirected
//         // direction -> 1 -> directed
//         if (direction == 1)
//         {
//             adjlist[u].push_back(v);
//         }
//         else
//         {
//             adjlist[u].push_back(v);
//             adjlist[v].push_back(u);
//         }
//         cout << endl<< "printing adjList" << endl;
//         printingAdjlist();
//         cout << endl;
//     }
//     void printingAdjlist()
//     {
//         for (auto i : adjlist)
//         {
//             cout << i.first << "-> {";
//             for (auto neighbour : i.second)
//             {
//                 cout << neighbour << ",";
//             }
//             cout << "}" << endl;
//         }
//     }
// };

template <typename T>
class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adjlist;

    void addEge(T u, T v, int wt, bool direction)
    {
        if (direction == 1)
        {
            adjlist[u].push_back(make_pair(v, wt));
        }
        else
        {
            adjlist[u].push_back({v, wt});
            adjlist[v].push_back({u, wt});
        }

        // cout << "printing graph :" << endl;
        // printAdjList();
        // cout << endl;
    }

    void printAdjList()
    {
        for (auto i : adjlist)
        {
            cout << i.first << ": { ";
            for (pair<T, int> p : i.second)
            {
                cout << "{" << p.first << ", " << p.second << "}, ";
            }
            cout << "} " << endl;
        }
    }

    void bfsTraversal(T src, unordered_map<T, bool> &vis)
    {
        queue<T> q;
        // inital state
        q.push(src);
        vis[src] = true;

        while (!q.empty())
        {
            T frontNode = q.front();
            cout << frontNode << " ";
            q.pop();
            // goo to nbr
            for (auto nbr : adjlist[frontNode])
            {
                T nbrData = nbr.first;

                if (!vis[nbrData])
                {
                    q.push(nbrData);
                    vis[nbrData] = true;
                }
            }
        }
    }

    void dfsTraversal(T src, unordered_map<T, bool> &vis)
    {
        vis[src] = true;
        cout << src << " ";

        for (auto nbr : adjlist[src])
        {
            T nbrData = nbr.first;
            if (!vis[nbrData])
            {
                dfsTraversal(nbrData, vis);
            }
        }
    }
};

int main()
{
    // Graph g;
    // g.addEdge(0, 1, 0);
    // g.addEdge(1, 2, 0);
    // g.addEdge(1, 3, 0);
    // g.addEdge(2, 3, 0);

    // Graph <int>g;
    // g.addEge(0,1,5,0);
    // g.addEge(1,2,10,0);
    // g.addEge(1,3,20,0);
    // g.addEge(2,3,50,0);

    Graph<char> g;
    // cout << "HII" << endl;
    g.addEge('a', 'b', 5, 0);
    // g.addEge('a', 'c', 10, 0);
    g.addEge('c', 'd', 20, 0);
    g.addEge('c', 'e', 50, 0);
    // g.addEge('d', 'e', 20, 0);
    g.addEge('e', 'f', 50, 0);

    // unordered_map<char, bool> vis;
    // for (char node = 'a'; node <= 'f'; node++)
    // {
    //     if (!vis[node])
    //     {
    //         g.bfsTraversal(node, vis);
    //     }
    // }
    unordered_map<char, bool> visited;

    // g.dfsTraversal('a', visited);
    cout<<endl;
    for(char node = 'a' ; node <= 'f' ; node++){
        if(!visited[node])
        {
            g.dfsTraversal(node,visited);
        }
    }

    return 0;
}


// HW: find out number of disconnected components in a graph
