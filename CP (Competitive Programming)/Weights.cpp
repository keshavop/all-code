#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b || a == c || a == d)
        {
            cout << "YES" << endl;
        }
        else if (a == (b + c))
        {
            cout << "YES" << endl;
        }
        else if (a == (c + d))
        {
            cout << "YES" << endl;
        }
        else if (a == (b + d))
        {
            cout << "YES" << endl;
        }
        else if (a == (a + b + c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}