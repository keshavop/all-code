#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int rem = 0;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        rem = a % b;
        cout << rem << endl;
    }

    return 0;
}