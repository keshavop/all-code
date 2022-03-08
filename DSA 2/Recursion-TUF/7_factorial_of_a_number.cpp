/*
Factorial of number

Time ->  0 (n)
Space -> 0 (n)

*/

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n = 6;
    cout << fact(n);
    return 0;
}