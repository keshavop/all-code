#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        bool flag = false;
        int res = 1;
        for (int i = 1; i < n; i++)
        {
            if(arr[i]!=arr[res-1] && arr[i]!=arr[res+1]){
                cout<<"Yes"<<endl;
                // flag = false;
            }
            else{
                cout<<"No"<<endl;
                // flag = true;
            }
        }
        
    }

    return 0;
}