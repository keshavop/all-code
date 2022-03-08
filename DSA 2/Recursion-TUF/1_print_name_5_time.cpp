// Print name 5 time using recursion

// Time  -> 0(n)
// Space -> 0(n)

#include <iostream>
using namespace std;

int print(int i, int n)
{
    if (i > n)
    {
        return -1;
    }
    cout << "kiki" << endl;
    i++;
    print(i, n);
}

int main()
{
    int i = 1;
    int n = 5;
    print(i, n);
    return 0;
}