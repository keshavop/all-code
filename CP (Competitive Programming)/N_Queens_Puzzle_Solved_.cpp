
// https://www.codechef.com/FEB221C/problems/EUREKA

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        double a,ans;
        cin>>a;
        ans=((0.143 *a)^a);
        // ans=ans^4.0;
        cout<<ans<<endl;
    }
    
    return 0;
}