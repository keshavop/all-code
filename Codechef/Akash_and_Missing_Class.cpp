#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int temp;
        if (a < 6)
        {
            cout << "0" << endl;
        }
        else if (a == 6)
        {
            cout << "1" << endl;
        }
        else
        {
            temp = a / 7;
            cout << temp << endl;
        }
    }

    return 0;
}