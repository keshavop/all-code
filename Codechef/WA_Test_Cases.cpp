#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string str;
        cin >> str;
        int ans = INT_MAX;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '0')
            {
                ans = min(ans, arr[j]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}