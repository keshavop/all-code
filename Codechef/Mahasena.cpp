#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    int e = 0, o = 0;
    for (int i = 0; i < t; i++)
    {

        if (arr[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    if (e > o)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }
    return 0;
}