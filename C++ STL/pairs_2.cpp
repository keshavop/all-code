// Comparison in Pairs

#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p1(1, 9), p2(5, 2);

    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;
    cout << (p1 > p2) << endl;
    cout << (p1 < p2) << endl;

    return 0;
}