#include <bits/stdc++.h>
//#include <iostream>
int power(int n, int x)
{
    int res = 1;
    while (x > 0)
    {
        if (x % 2 != 0)
        {
            res = res * n;
        }
        n = n * n;
        x = x / 2;
    }
    return res;
}

using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    cout << power(n, x);
    return 0;
}