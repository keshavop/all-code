#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[1000];
    char largest[1000];
    cin.getline(a,1000);

    int l=0;
    int largest_len=0;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a,1000);
        l=strlen(a);
        if (l>largest_len)
        {
            largest_len=l;
            strcpy(largest,a);
        }
    }

    cout<<largest<<" and "<< largest_len<<endl;    
    return 0;
}