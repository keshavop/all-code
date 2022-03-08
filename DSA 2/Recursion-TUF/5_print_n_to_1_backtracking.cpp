// Print name n to 1 using backtracking recursion

// Time  -> 0(n)
// Space -> 0(n)

#include <iostream>
using namespace std;

int print(int i, int n)
{
    if (i < n)
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