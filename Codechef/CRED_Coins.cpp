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
        int bill = a * b;
        int bag = bill / 100;
        cout<<bag<<endl;
    }

    return 0;
}