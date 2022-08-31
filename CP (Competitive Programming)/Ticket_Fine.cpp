#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int fine, a, b;
        cin>>fine>>a>>b;

        int person = abs(b -a) ;
        int price = person * fine;
        cout<<price<<endl;
    }

    return 0;
}