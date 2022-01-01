#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum=0;
    for (int i = 0; i < t; i++)
    {
        int a,b,c=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        if (sum==180)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}