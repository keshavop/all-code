#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{
    unordered_set<int> s;
    
    s.insert(10);
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(29);
    s.insert(23);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}