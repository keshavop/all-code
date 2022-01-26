
// starter 23   26th jan 2022
// code CHFPROFIT

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,money,profit;
        cin>>x>>y>>money;
        int price=x*y;
        money=money*x;
        profit=money-price;
        cout<<profit<<endl;
    }
    
    return 0;
}