// Print name 1 to n whithout increment using recursion

// Time  -> 0(n)
// Space -> 0(n)

#include <iostream>
using namespace std;

int print(int i, int n)
{
    if (i < 1)
    {
        return -1;
    }
    print(i - 1, n);
    cout << i << " ";
}

int main()
{
    int i = 10;
    int n = 1;
    print(i, n);

    return 0;
}