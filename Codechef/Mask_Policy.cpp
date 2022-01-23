#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;    //n=total no of people, a=no of infected;
        cin>>n>>a;
        int diff=n-a;
        int min_no=min(a,diff);
        cout<<min_no<<endl;
    }
    return 0;
}