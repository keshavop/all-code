// Sort in C++ Stl in vector

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 50, 30, 90};

    sort(v.begin(), v.end()); // sort func in increasing order
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    sort(v.begin(), v.end(), greater<int>()); // sort func in decreasing order
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}