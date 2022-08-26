#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x;
        cin>>x;
        float y;
        cin>>y;
        float z=(x-y)/2;
        // float ans =z;
        // z=abs(ans);
        cout<<lround(abs(z))<<endl;
    }

    return 0;
}