#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int divide;
    cin>>divide;
    int count=0,num;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        if (num%divide==0)
        {
            count++;
        }
    }
    
    cout<<count;

    return 0;
}