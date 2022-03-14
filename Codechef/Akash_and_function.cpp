#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num = n % 2;
        if (num == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << n / 2 + 1 << endl;
        }
    }

    return 0;
}