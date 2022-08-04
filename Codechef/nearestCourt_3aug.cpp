#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; //travel
        cin>>n;
        float petrol;
        cin>>petrol;
        float diseal;
        cin>>diseal;
        int petrolPrice;
        cin>>petrolPrice;
        int disealPrice;
        cin>>disealPrice;

        float x = n*(petrol/petrolPrice);
        float y = n*(diseal/disealPrice);

        // int ans=min(x,y);
        if(x==y){
            cout<<"ANY"<<endl;
        }
        else if(x<y){
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"DIESEL"<<endl;
        }
    }

    return 0;
}