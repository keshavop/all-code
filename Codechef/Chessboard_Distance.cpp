#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        int xcoordinate=abs(x1-y1);
        int ycoordinate=abs(x2-y2);
        int ans=max(xcoordinate,ycoordinate);
        cout<<ans<<endl;
    }

    return 0;
}