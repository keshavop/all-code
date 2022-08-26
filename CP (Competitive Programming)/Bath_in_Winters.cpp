#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int temp = 2 * b;
        int num = a / temp;
        cout << num << endl;
    }

    return 0;
}