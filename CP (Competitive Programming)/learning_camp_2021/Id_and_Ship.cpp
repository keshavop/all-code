#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        if (s=="B" || s=="b")
        {
            cout<<"BattleShip"<<endl;
        }
        else if (s=="C" || s=="c")
        {
            cout<<"Cruiser"<<endl;
        }
        else if (s=="D" || s=="d")
        {
            cout<<"Destroyer"<<endl;
        }
        else
        {
            cout<<"Frigate"<<endl;
        }
    }
    
    return 0;
}