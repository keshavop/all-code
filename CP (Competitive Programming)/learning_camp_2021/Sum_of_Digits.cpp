#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int num, r,sum=0;
        cin >> num;
        while (num > 0)
        {
            r = num % 10;
            sum = sum + r;
            num = num / 10;
        }
        cout << sum<<endl;
    }

    return 0;
}