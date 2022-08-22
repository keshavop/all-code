#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int fixedAvg = 35;
        int abavg = (a + b) / 2;
        int bcavg = (b + c) / 2;
        int acavg = (a+c) /2;
        if (abavg >= 35 && bcavg >= 35 && acavg >= 35)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    return 0;
}