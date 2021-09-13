#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}