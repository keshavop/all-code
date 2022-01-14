#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==7 || b==7 || c==7){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        t--;
    }
    
    return 0;
}