#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int money,pizza,burger;
        cin>>money>>pizza>>burger;
        if (pizza<=money)
        {
            cout<<"PIZZA"<<endl;
        }
        else if(burger<=money){
            cout<<"BURGER"<<endl;
        }
        else{
            cout<<"NOTHING"<<endl;
        }
    }
    return 0;
}