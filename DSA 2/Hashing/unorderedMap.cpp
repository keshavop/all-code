#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    m["kiki"] = 3;
    m["cpp"] = 55;
    m["java"] = 56;

    m.insert(make_pair("kikiii", 666));

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}