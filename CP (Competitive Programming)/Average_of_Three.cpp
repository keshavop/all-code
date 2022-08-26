
// starter 23   26th jan 2022
// code AVGOF3
// https://www.codechef.com/START23C/problems/AVGOF3


#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         float a,b,c;
//         cin>>a>>b>>c;
//         float mean=(a+b+c)/3;
//         cout<<setprecision(4)<<mean<<endl;
//     }
    
//     return 0;
// }


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;        
        // cout<<x-2<<" "<<x<<" "<<x+2<<endl;

        cout<<x-1<<" "<<x<<" "<<x+1<<endl;
    }
    return 0;
}