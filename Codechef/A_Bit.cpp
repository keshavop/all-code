#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num = 0;
    string s1 = "++X";
    string s2 = "X++";
    string s3 = "--X";
    string s4 = "X--";
    while (t--)
    {
        string s;
        cin >> s;

        if (s == s1 || s == s2)
        {
            num = num + 1;
        }
        if (s == s3 || s == s4)
        {
            num = num - 1;
        }
    }
    cout<<num<<endl;
    return 0;
}