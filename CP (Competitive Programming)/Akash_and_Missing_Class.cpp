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
        int num;
        num = n % 7;
        if (num == 0)
        {
            cout << n / 7 << endl;
        }
        else if (num >= 6)
        {
            cout << n / 7 + 1 << endl;
        }
        else
        {
            cout << n / 7 << endl;
        }
    }

    return 0;
}