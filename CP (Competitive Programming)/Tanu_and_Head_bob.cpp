#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int ycount=0,icount=0,ncount=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='Y')
            {
                ycount++;
            }
            else if (s[i]=='I')
            {
                icount++;
            }
            // else{
            //     icount++;
            // }
        }
        if (ycount>0)
        {
            cout<<"NOT INDIAN"<<endl;
        }
        else if(icount>0){
            cout<<"INDIAN"<<endl;
        }
        else{
            cout<<"NOT SURE"<<endl;
        }
    }

    return 0;
}