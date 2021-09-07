#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int res = 0;
    while (n != 0)
    {
        res = res + n % 10;
        n = n / 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}