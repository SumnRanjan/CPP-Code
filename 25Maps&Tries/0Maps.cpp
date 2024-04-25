#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    // creartion
    unordered_map<string, int> mapping;

    // insertion
    pair<string, int> p = make_pair("love", 25);

    pair<string, int> q("suman", 21);

    pair<string, int> r;
    r.first = "sunaina";
    r.second = 20;

    // insertion
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    mapping["babbar"] = 51;

    cout << "size of map : " << mapping.size() << endl;

    // access
    cout << mapping.at("love") << endl;
    cout << mapping["suman"] << endl;

    cout << mapping.count("love") << endl;
    cout << "size of map : " << mapping.size() << endl;

    if (mapping.find("babbar") != mapping.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    cout << "size of map : " << mapping.size() << endl;
    cout << mapping["kumar"] << endl; 
    // jab hum sqaure bracket se access kartaa hai aur value 
    // present nahi hoti hai to enrty ho jati hai uski map mai
    cout << "size of map : " << mapping.size() << endl;

    return 0;
}