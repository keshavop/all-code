#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int size=0;
    size=sizeof(arr)/sizeof(int);
    cout<<size;

    return 0;
}