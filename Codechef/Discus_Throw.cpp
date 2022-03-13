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
        int num = max(a, b);
        int num1 = max(num, c);
        cout << num1 << endl;
    }

    return 0;
}