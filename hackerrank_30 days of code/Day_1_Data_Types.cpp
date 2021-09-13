#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b;
    string c;
    cin >> a;
    cin >> b;
    while (c.length() == 0)
        getline(cin, c);
    cout << i + a << endl;
    cout << fixed << setprecision(1) << d + b << endl;
    cout << s << "" << c;
    return 0;
}