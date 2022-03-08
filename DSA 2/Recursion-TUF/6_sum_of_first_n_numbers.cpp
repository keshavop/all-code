/*
Sum of first n numbers

Time ->
Space ->

*/

#include <iostream>
using namespace std;

int summ(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    return n + summ(n - 1);
}

int main()
{
    int n = 10;
    cout << summ(n);
    return 0;
}